#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the main and secondary diagonals of a square matrix.
 * @a: Pointer to the start of the square matrix.
 * @size: Size of the square matrix.
 *
 * Return: None.
 */
void print_diagsums(int *a, int size)
{
    int i, sum1 = 0, sum2 = 0;
    for (i = 0; i < size; i++)
    {
        sum1 += *(a + i * size + i);
        sum2 += *(a + (size - 1) * (i + 1));
    }
    printf("%d, %d\n", sum1, sum2);
}

