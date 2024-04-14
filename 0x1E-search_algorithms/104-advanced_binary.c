#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using recursion.
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

    printf("Searching in array: ");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i != size - 1)
            printf(", ");
    }
    printf("\n");

    if (size == 1)
        return (array[0] == value) ? 0 : -1;

    size_t middle = size / 2;
    if (array[middle] == value)
        return middle;
    else if (array[middle] > value)
        return advanced_binary(array, middle, value);
    else
        return advanced_binary(array + middle, size - middle, value);
}
