#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number using recursion
 * @n: The number for which square root is to be calculated
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return _sqrt_helper(n, i + 1);
}
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return _sqrt_helper(n, 0);
}
