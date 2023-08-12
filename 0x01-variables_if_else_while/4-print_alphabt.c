#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
    int c;

    for (c = 97; c <= 122; c++)
    {
        if (c != 101 && c != 113)
            putchar(c);
    }
    putchar('\n');
    return (0);
}
