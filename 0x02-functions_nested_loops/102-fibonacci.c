#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued terms in the Fibonacci sequence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    long int t1 = 1, t2 = 2, nextTerm;
    long int sum = 0;

    while (t2 <= 4000000)
    {
        if (t2 % 2 == 0)
        {
            sum += t2;
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("%ld\n", sum);

    return 0;
}
