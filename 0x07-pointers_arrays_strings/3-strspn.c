#include <stddef.h>
#include "main.h"

/**
 * _strspn - Get the length of a prefix substring.
 * @s: The string to search.
 * @accept: The characters that are allowed in the prefix substring.
 *
 * This function calculates the length of the initial segment of @s
 * that consists only of characters present in the string @accept.
 *
 * Return: The length of the initial segment of @s.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *ptr = accept;
while (*s)
{
while (*ptr)
{
if (*s == *ptr)
{
count++;
break;
}
ptr++;
}
if (!*ptr)
break;
ptr = accept;
s++;
}
return (count);
}
