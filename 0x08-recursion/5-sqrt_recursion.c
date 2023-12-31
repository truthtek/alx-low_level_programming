/**
 * _sqrt_helper - Helper function that calculates the natural square root
 * @n: The number for which square root is to be calculated
 * @i: The current value being tested as the square root of n
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 */
int _sqrt_helper(int n, int i)
{
/* function body */
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number for which square root is to be calculated
 *
 * Return: The natural square root of n, or -1 if n is negative
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_helper(n, 0));
}
