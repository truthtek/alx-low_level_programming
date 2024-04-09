#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n) {
    if (n == 0) {
        _putchar('0');
        return;
    }

    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    int digits[10];
    int i = 0;

    while (n > 0) {
        digits[i++] = n % 10;
        n /= 10;
    }

    while (i > 0) {
        _putchar('0' + digits[--i]);
    }
}
