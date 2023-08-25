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
    int i, j, k, l1, l2, carry, sum;
    for (l1 = 0; n1[l1] != '\0'; l1++)
        ;
    for (l2 = 0; n2[l2] != '\0'; l2++)
        ;
    if (l1 >= size_r || l2 >= size_r || l1 + 2 > size_r || l2 + 2 > size_r)
        return (0);
    carry = 0;
    for (i = l1 - 1, j = l2 - 1, k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++)
    {
        sum = carry;
        sum += (i >= 0) ? n1[i] - '0' : 0;
        sum += (j >= 0) ? n2[j] - '0' : 0;
        r[k] = (sum % 10) + '0';
        carry = sum / 10;
    }
    r[k] = '\0';
    for (i = 0; i < k / 2; i++)
    {
        sum = r[i];
        r[i] = r[k - i - 1];
        r[k - i - 1] = sum;
    }
    return (r);
}

