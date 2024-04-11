#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using an advanced
 *                  binary search algorithm that returns the index of the first
 *                  occurrence of the value.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located, or -1 if the value is not
 *         present or the array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}

/**
 * advanced_binary_recursive - Recursively searches for a value in a sorted
 *                            array using an advanced binary search algorithm
 *                            that returns the index of the first occurrence of
 *                            the value.
 * @array: Pointer to the first element of the array (or subarray) to search.
 * @low: Lowest index of the array (or subarray) to search.
 * @high: Highest index of the array (or subarray) to search.
 * @value: Value to search for.
 *
 * Return: The index where the value is located, or -1 if the value is not found.
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
    if (low > high)
        return -1;

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
    {
        if (mid == low || array[mid - 1] != value)
            return mid;
        return advanced_binary_recursive(array, low, mid - 1, value);
    }

    if (array[mid] < value)
        return advanced_binary_recursive(array, mid + 1, high, value);
    else
        return advanced_binary_recursive(array, low, mid - 1, value);
}
