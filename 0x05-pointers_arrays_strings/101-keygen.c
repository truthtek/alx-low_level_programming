#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0
 */
int main(void)
{
    int sum = 2772;
    char c;

    srand(time(0));

    while (sum > 122)
    {
        c = (rand() % 125) + 1;
        printf("%c", c);
        sum -= c;
    }
    printf("%c", sum);

    return (0);
}
