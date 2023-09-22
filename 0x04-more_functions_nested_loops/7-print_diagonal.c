#include "main.h"

/**
 * print_diagonal - Draws a diagonal line of backslashes in the terminal.
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
int spaces = 0;
if (n <= 0)
{
_putchar('\n');
return;
}
while (n > 0)
{
int i;
for (i = 0; i < spaces; i++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
spaces++;
n--;
}
}
