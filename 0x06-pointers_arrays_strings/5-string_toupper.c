#include "main.h"

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
}
return (str);
}
