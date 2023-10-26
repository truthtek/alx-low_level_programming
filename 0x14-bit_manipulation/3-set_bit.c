#include "main.h"
/**
* set_bit - Sets the value of a bit to 1 at a given index.
* @n: Pointer to the number to modify.
* @index: The index of the bit to set, starting at 0.
*
* Return: 1 if successful, -1 on error.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
*n |= (1UL << index);
return (1);
}
