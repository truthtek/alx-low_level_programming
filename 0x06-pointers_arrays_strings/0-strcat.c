#include "main.h"
/**
* _strcat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string to append.
* Return: A pointer to the resulting.
*/
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++);
for (j = 0; src[j] != '\0'; j++)
dest[i + j] = src[j];
dest[i + j] = '\0';
return (dest);
}
