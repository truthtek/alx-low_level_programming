#include "search_algos.h"

/**
 * _advanced_binary - Recursively searches for the first occurrence
 *                   of a value in a sorted array.
 * @array: Pointer to the first element of the array to search in.
 * @low: Lower index of the search range.
 * @high: Upper index of the search range.
 * @value: Value to search for.
 *
 * Return: Pointer to the first occurrence of the value in the array,
 *         or NULL if the value is not present.
 */
int *_advanced_binary(int *array, size_t low, size_t high, int value)
{
    if (low > high)
        return NULL;

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
            return &array[mid];
        else
            return _advanced_binary(array, low, mid - 1, value);
    }
    else if (array[mid] > value)
        return _advanced_binary(array, low, mid - 1, value);
    else
        return _advanced_binary(array, mid + 1, high, value);
}

/**
 * advanced_binary - Searches for the first occurrence of a value in a
 *                  sorted array using recursion.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where the first occurrence of the value is located,
 *         or -1 if the value is not present or if the array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
    int *result = _advanced_binary(array, 0, size - 1, value);
    return (result) ? (result - array) : -1;
}
