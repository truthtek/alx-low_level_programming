#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
    unsigned int num;
    int divisor;
    int place_value;

    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    else
    {
        num = n;
    }

    place_value = 1;
    divisor = 1;

    while (num / divisor >= 10)
    {
        divisor *= 10;
        place_value++;
    }

    while (place_value > 0)
    {
        _putchar((num / divisor) + '0');
        num %= divisor;
        divisor /= 10;
        place_value--;
    }
}
