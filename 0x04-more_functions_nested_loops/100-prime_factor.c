#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
* main - finds and prints the largest prime
* factor of the number 612852475143,
* followed by a new line.
* @void:
* Description - finds and prints the largest prime
* factor of the number 612852475143,
* followed by a new line.
* Return: 0
*/

int main(void)
{
	long int a;
	long int b;
	long int c;

	b = 612852475143;

	for (a = 1; a <= b; a++)
	{
		if (b % a == 0)
		{
			if (b == a)
			{
				printf("%ld\n", a);
				break;
			}
			c = b / a;
			b = c;
			a = 1;
		}
	}
	return (0);
}
