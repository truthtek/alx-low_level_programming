#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
if (b == NULL)
return (0);
while (*b) {
if (*b != '0' && *b != '1')
return (0);    
num <<= 1;
num += (*b - '0');
b++;
}
return (num);
}
