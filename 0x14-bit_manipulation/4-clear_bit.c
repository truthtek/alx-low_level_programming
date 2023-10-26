#include <stdio.h>
#include "main.h"
/**
* clear_bit - Clears the value of a bit at a given index.
* @n: Pointer to the number to modify.
* @index: The index of the bit to clear, starting from 0.
*
* Return: 1 if successful, -1 on error.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || index >= (sizeof(unsigned long int) * 8))
return (-1);
*n &= ~(1UL << index);
return (1);
}
