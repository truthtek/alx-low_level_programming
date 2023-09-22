#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Return: char pointer
 */
char *cap_string(char *s)
{
int i, j;
char sep[] = " \t\n,;.!?\"(){}";
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
if (i == 0)
s[i] -= ('a' - 'A');
else
{
for (j = 0; sep[j] != '\0'; j++)
{
if (s[i - 1] == sep[j])
s[i] -= ('a' - 'A');
}
}
}
}
return (s);
}
