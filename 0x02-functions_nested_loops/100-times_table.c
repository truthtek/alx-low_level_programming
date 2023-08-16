#include "main.h"

void print_times_table(int n)
{
    int i, j, product;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            product = i * j;
            if (j != 0)
                _putchar(' ');
            if (product >= 10)
            {
                _putchar(product / 10 + '0');
                _putchar(product % 10 + '0');
            }
            else
            {
                if (j != 0)
                    _putchar(' ');
                _putchar(product + '0');
            }
            if (j != n)
                _putchar(',');
        }
        _putchar('\n');
    }
}
