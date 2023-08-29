#include "main.h"

/**
 * _strstr - Locate a substring.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * The _strstr() function finds the first occurrence of the substring
 * @needle in the string @haystack. The terminating null bytes (\0)
 * are not compared. Characters that appear after a null byte are not searched.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *ptr1 = haystack;
char *ptr2 = needle;
while (*haystack)
{
ptr1 = haystack;
ptr2 = needle;
while (*ptr1 && *ptr2 && *ptr1 == *ptr2)
{
ptr1++;
ptr2++;
}
if (!*ptr2)
return (haystack);
haystack++;
}
return (NULL);
}
