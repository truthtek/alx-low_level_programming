#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to print in binary.
 */
void print_binary(unsigned long int n)
{
        int bit = 0;

        if (n == 0) {
                _putchar('0');
                return;
        }

        while (n > 0) {
                bit = n & 1;
                n >>= 1;

                if (bit)
                        _putchar('1');
                else
                        _putchar('0');
        }
}
