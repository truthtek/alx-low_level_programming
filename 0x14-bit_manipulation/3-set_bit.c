#include <stdio.h>
#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int number.
 * @index: The index, starting from 0, of the bit. 
 *
 * Return: Value of bit at the index, or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	return ((n >> index) & 1UL); 
}
