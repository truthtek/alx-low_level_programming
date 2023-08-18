#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of a number.
 *
 * Return: Always 0.
 */
int main(void)
{
    long long number = 612852475143;
    long long factor = 2;
    long long largestFactor = 0;

    while (number > 1)
    {
        if (number % factor == 0)
        {
            largestFactor = factor;
            number /= factor;
        }
        else
        {
            factor++;
        }
    }

    printf("%lld\n", largestFactor);

    return (0);
}
