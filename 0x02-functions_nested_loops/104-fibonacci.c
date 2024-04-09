#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * Return: 0 on success
 */
int main(void) {
    unsigned int i;
    unsigned int first = 1, second = 2, next;

    printf("%u, %u", first, second);

    for (i = 2; i < 98; i++) {
        next = first + second;
        printf(", %u", next);
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
