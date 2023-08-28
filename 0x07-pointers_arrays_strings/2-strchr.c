#include "main.h"

/**
 * _strchr - Locate a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Returns a pointer to the first occurrence of the character @c
 * in the string @s, or NULL if the character is not found.
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
