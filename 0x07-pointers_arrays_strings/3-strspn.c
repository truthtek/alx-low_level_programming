#include <stddef.h>
#include "main.h"

/**
 * _strspn - Get the length of a prefix substring.
 * @s: The string to search.
 * @accept: The characters that are allowed in the prefix substring.
 *
 * Returns the number of bytes in the initial segment of @s
 * which consist only of bytes from @accept.
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
