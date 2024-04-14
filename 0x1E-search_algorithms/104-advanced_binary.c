#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursively searches for the first occurrence
 *                            of a value in a sorted array.
 * @array: Pointer to the first element of the array to search in.
 * @low: Lower index of the search range.
 * @high: Upper index of the search range.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if value is not present.
 */
int advanced_binary(int *array, size_t size, int value);
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
        else
            return advanced_binary_recursive(array, low, mid - 1, value);
    }
    else if (array[mid] > value)
        return advanced_binary_recursive(array, low, mid - 1, value);
    else
        return advanced_binary_recursive(array, mid + 1, high, value);
}

/**
 * advanced_binary - Searches for the first occurrence of a value in a
 *                  sorted array using recursion.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if value is not present
 *         or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}
