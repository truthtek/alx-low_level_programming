#include <math.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using the
 *                     Exponential Search algorithm.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value is not
 *         present or the array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    if (array[0] == value)
        return 0;

    size_t i = 1;
    while (i < size && array[i] <= value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i *= 2;
    }

    size_t low = i / 2;
    size_t high = min(i, size);

    printf("Value found between indexes [%lu] and [%lu]\n", low, high - 1);

    return binary_search(array, low, high - 1, value);
}

/**
 * binary_search - Searches for a value in a sorted array using the
 *                 Binary Search algorithm.
 * @array: Pointer to the first element of the array to search.
 * @low: Lowest index of the array (or subarray) to search.
 * @high: Highest index of the array (or subarray) to search.
 * @value: Value to search for.
 *
 * Return: The index where the value is located, or -1 if the value is not found.
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
    while (low <= high)
    {
        size_t mid = low + (high - low) / 2;
        printf("Searching in array: ");
        for (size_t i = low; i <= high; i++)
        {
            printf("%d", array[i]);
            if (i != high)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
