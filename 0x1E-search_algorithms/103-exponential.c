#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                     using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: First index where value is located, or -1 if value is not present
 *         or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    size_t i = 1;
    while (i < size && array[i] <= value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i *= 2;
    }

    size_t left = i / 2;
    size_t right = (i < size) ? i : size - 1;
    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    return binary_search(array, left, right, value);
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search.
 * @left: Index of the leftmost element of the search range.
 * @right: Index of the rightmost element of the search range.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if value is not present.
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
    size_t middle;

    while (left <= right)
    {
        middle = left + (right - left) / 2;
        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i != right)
                printf(", ");
        }
        printf("\n");

        if (array[middle] == value)
            return middle;
        else if (array[middle] < value)
            left = middle + 1;
        else
            right = middle - 1;
    }

    return -1;
}
