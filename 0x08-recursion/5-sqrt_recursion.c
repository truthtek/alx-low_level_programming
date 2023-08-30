#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number using recursion
 * @n: The number for which square root is to be calculated
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0) // Check for negative input
    {
        return -1; // Return -1 to indicate an error
    }
    else if (n == 0 || n == 1) // Base cases: square root of 0 and 1 is the number itself
    {
        return n;
    }
    else
    {
        return helper_sqrt(n, 1, n); // Call the helper function with appropriate parameters
    }
}

/**
 * helper_sqrt - A helper function to find the square root using binary search
 * @n: The number for which square root is to be calculated
 * @low: The lower bound of the binary search
 * @high: The upper bound of the binary search
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */
int helper_sqrt(int n, int low, int high)
{
if (low <= high)
{
int mid = low + (high - low) / 2;
int square = mid * mid;
if (square == n)
{
  return (mid);
}
else if (square < n)
{
return helper_sqrt(n, mid + 1, high);
}
else
{
return helper_sqrt(n, low, mid - 1);
}
}
  return (-1);
}
