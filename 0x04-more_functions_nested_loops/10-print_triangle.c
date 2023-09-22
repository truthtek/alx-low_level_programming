#include "main.h"
/**
 * print_triangle - Prints a triangle of hash symbols in the terminal.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
int row, col, spaces;
if (size <= 0)
{
_putchar('\n');
return;
}
for (row = 1; row <= size; row++)
{
spaces = size - row;
for (col = 0; col < spaces; col++)
{
_putchar(' ');
}
for (col = 0; col < row; col++)
{
_putchar('#');
}
_putchar('\n');
}
}

