#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 9; i++)
    {
        putchar(i + '0'); /* Print the first number */
        for (j = i; j <= 9; j++)
        {
            if (i != j)
            {
                putchar(',');
                putchar(' ');
                putchar(j + '0');
            }
        }
    }
    putchar('\n');
    return (0);
}
