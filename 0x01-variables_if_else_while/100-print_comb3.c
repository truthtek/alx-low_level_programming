#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * : This program uses two nested for loops to iterate through all
 * possible combinations of two digits. The outer loop iterates through the
 * first digit (i) from 0 to 9, while the inner loop iterates through the second
 * digit (j) from i + 1 to 9. In each iteration of the inner loop, the program
 * uses the putchar function to print the current combination of digits (i + '0'
 * and j + '0') and, if the current combination is not the last one (i != 8 ||
 * j != 9), a comma and a space. Finally, after both loops, the program uses
 * putchar to print a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            putchar(i + '0');
            putchar(j + '0');
            if (i != 8 || j != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return (0);
}
