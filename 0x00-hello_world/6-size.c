#include <stdio.h>

int main(void)
{
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));

    return 0;
}