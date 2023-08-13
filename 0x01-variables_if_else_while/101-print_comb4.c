#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * : This program uses two nested for loops to iterate through all
 * possible combinations of two digits. The outer loop iterates through the
 * first digit (i) from 0 to 9,while the inner loop iterates through the second
 * digit (j) from i + 1 to 9. In each iteration of the inner loop, the program
 * uses the putchar function to print the current combination of digit (i + '0'
 * and j + '0') and, if the current combination is not the last one (i != 8 ||
 * j != 9), a comma and a space. Finally, after both loops, the program uses
 * putchar to print a newline character.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, k;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
