#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
/* function is_palindrome_helper */
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * _strlen_recursion - Calculates the length of a string using recursion
 * @s: The string for which length is to be calculated
 *
 * Return: The length of s
 */
int _strlen_recursion(char *s)
{
/* function _strlen_recursion */
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (is_palindrome_helper(s, 0, len - 1));
}
