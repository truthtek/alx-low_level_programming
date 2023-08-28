#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The bytes to search for.
 *
 * Returns a pointer to the first occurrence in the string @s
 * of any of the bytes in the string @accept, or NULL if no such byte is found.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (NULL);
}
