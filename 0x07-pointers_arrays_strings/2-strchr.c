#include "main.h"

/**
 * _strchr - Locate a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * This function locates the first occurrence of the character @c
 * in the string @s. It returns a pointer to the located character,
 * or NULL if the character is not found.
 *
 * Return: A pointer to the located character, or NULL if not found.
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
