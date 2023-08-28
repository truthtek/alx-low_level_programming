#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The bytes to search for.
 *
 * Returns a pointer to the first occurrence in the string @s
 * of any of the bytes in the string @accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
char *ptr = accept;
while (*s)
{
while (*ptr)
{
if (*s == *ptr)
return (s);
ptr++;
}
ptr = accept;
s++;
}
return (NULL);
}

