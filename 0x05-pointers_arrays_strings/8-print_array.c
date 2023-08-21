#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
    int i; // Declare i here
    
    for (i = 0; i < n; i++) {
        printf("%d", a[i]); // Print the current element
        
        if (i < n - 1) {
            printf(", "); // Print comma and space for all elements except the last one
        }
    }
    
    printf("\n"); // Print a new line after printing elements
}
