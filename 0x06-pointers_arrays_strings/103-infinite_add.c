#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer to store the result
 * @size_r: the size of the buffer
 *
 * Return: char pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, n1_len, n2_len, max_len, sum, carry;
for (n1_len = 0; n1[n1_len] != '\0'; n1_len++)
;
for (n2_len = 0; n2[n2_len] != '\0'; n2_len++)
;
max_len = n1_len > n2_len ? n1_len : n2_len;
if (max_len + 1 >= size_r)
return (0);
carry = 0;
for (i = n1_len - 1, j = n2_len - 1; i >= 0 || j >= 0 || carry; i--, j--)
{
sum = carry;
sum += i >= 0 ? n1[i] - '0' : 0;
sum += j >= 0 ? n2[j] - '0' : 0;
r[max_len] = sum % 10 + '0';
carry = sum / 10;
max_len--;
}
r[max_len + 1] = '\0';
if (max_len == 0)
r++;
return (r);
}
