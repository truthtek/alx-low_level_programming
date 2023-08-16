#include <stdio.h>
/**
 * main - Finds and prints the sum of even-valued terms in the Fibonacci sequence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    long int i, t1 = 1, t2 = 2, nextTerm;

    printf("%ld, %ld", t1, t2);
    for (i = 3; i <= 50; ++i)
    {
        nextTerm = t1 + t2;
        printf(", %ld", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return (0);
}
