#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to be checked
 * 
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
/* function helper */
if (n <= 1)
{
return (0);
}
if (i * i > n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_prime_helper(n, i + 1));
}
int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}
