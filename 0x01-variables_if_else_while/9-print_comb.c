#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;
    int putchar(int c);

    for (i = 0; i <= 9; i++)
    {
        for (j = i; j <= 9; j++)
        {
            if (i != j)
            {
                putchar(i + 48); /* 48 is the ASCII value of '0' */
                putchar(j + 48);
                if (i != 8 || j != 9) /* avoid printing comma and space for the last combination */
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
