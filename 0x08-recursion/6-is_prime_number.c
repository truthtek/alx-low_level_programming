#include "main.h"

/**
 * set_string - Sets the value of a pointer to a given string.
 * @s: Pointer to a pointer to a char (the target pointer).
 * @to: Pointer to a char (the string to set the target pointer to).
 *
 * This function dynamically allocates memory for the target string and updates
 * the target pointer to point to the new string. It also frees the previous
 * memory to prevent memory leaks.
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
