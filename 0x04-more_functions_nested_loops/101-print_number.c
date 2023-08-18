#include "main.h"

void print_number(int n)
{
    int temp = n;
    int div = 1;
    int num;

    if (n < 0)
    {
        _putchar('-');
        temp = -temp;
        n = -n;
    }
    while (temp > 9)
    {
        temp /= 10;
        div *= 10;
    }
    while (div >= 1)
    {
        num = n / div;
        _putchar(num + '0');
        n -= num * div;
        div /= 10;
    }
}
