#include "main.h"
/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: Converted number, or 0 if b is NULL
 * or contains non 0/1 chars.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int digit;
if (b == NULL)
return (0);
while (*b)
{
digit = *b - '0';
if (digit != 0 && digit != 1)
return (0);
num <<= 1;
num += digit;
b++;
}
return (num);
}
