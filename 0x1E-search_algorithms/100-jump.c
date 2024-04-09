#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump, i, j;

    if (!array)
        return (-1);

    jump = sqrt(size);
    for (i = 0; i < size; i += jump)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (i + jump >= size || array[i + jump] >= value)
        {
            printf("Value found between indexes [%lu] and [%lu]\n", i, i + jump);
            for (j = i; j < size && j <= i + jump; j++)
            {
                printf("Value checked array[%lu] = [%d]\n", j, array[j]);
                if (array[j] == value)
                    return (j);
            }
            break;
        }
    }

    return (-1);
}
