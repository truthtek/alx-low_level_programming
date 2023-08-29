#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The bytes to search for.
 *
 * This function searches the string @s for any of the bytes in the string
 * @accept. It returns a pointer to the first occurrence of any of the bytes
 * from the @accept string in the @s string, or NULL if no such byte is found.
 *
 * Return: A pointer to the first matching byte in @s, or NULL if not found.
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
