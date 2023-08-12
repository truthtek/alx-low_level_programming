#include <stdio.h>

int main(void)
{
    int i, j; /* i and j are the numbers from 0 to 99 */

    for (i = 0; i <= 99; i++)
    {
        for (j = i; j <= 99; j++)
        {
            if (i != j && i % 10 != j % 10 && i / 10 != j / 10) /* check if the two digits are different */
            {
                /* print the first number */
                putchar(i / 10 + 48);
                putchar(i % 10 + 48);

                /* print the comma and space if needed */
                i == 98 ? putchar('\n') : (putchar(','), putchar(' '));

                /* print the second number */
                putchar(j / 10 + 48);
                putchar(j % 10 + 48);

                /* print the comma and space if needed */
                j == 99 ? putchar('\n') : (putchar(','), putchar(' '));
            }
        }
    }
    return (0);
}
