#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the main and secondary diagonals of a square matrix.
 * @a: Pointer to the start of the square matrix.
 * @size: Size of the square matrix.
 *
 * Return: None.
 */
void print_diagsums(int *a, int size) {
    int diag1_sum = 0;
    int diag2_sum = 0;

    for (int i = 0; i < size; i++) {
        // Add the elements of the main diagonal
        diag1_sum += *(a + i*size + i);

        // Add the elements of the secondary diagonal
        diag2_sum += *(a + i*size + (size - 1 - i));
    }

    printf("Sum of main diagonal: %d\n", diag1_sum);
    printf("Sum of secondary diagonal: %d\n", diag2_sum);
}
