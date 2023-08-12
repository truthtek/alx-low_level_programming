#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
    int c;

    for (c = 97; c <= 122; c++)
        putchar(c);
    for (c = 65; c <= 90; c++)
        putchar(c);
    putchar('\n');
    return (0);
}
