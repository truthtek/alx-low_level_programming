#include <stdio.h>
#include <math.h>

int main(void)
{
    long int n = 612852475143;
    long int maxPrime = -1;
    while (n % 2 == 0)
    {
        maxPrime = 2;
        n >>= 1;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            maxPrime = i;
            n = n / i;
        }
    }
    if (n > 2)
        maxPrime = n;

    printf("%ld\n", maxPrime);
    return (0);
}
