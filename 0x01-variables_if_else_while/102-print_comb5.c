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
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
if (i != j)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');

if (i != 98 || j != 99)
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
