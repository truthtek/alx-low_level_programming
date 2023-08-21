#include "main.h"

/**
 *Prints every other character of a string, starting with the first character.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
if (str[i] != '\0')
{
i++;
}
}
_putchar('\n');
}
