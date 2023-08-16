#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

void print_fibonacci(int n)
{
    int i, t1 = 0, t2 = 1, nextTerm;

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t2);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main(void)
{
    print_fibonacci(98);
    return (0);
}

