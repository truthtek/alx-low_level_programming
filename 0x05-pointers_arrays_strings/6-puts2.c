#include <stdio.h>
#include "main.h"

/**
 * print_string_2 - prints every other character of a string
 * @str: the string to print
 *
 * Return: void
 */
void print_string_2(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            _putchar(str[i]);
        }
    }
    _putchar('\n');
}
