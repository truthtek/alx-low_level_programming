#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program demonstrates memory manipulation to change
 * the value of a[2] using pointer arithmetic without directly modifying a.
 * It prints the value of a[2] before and after the change.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;
    *(p + 5) = 98;  /* Manipulate memory to change a[2] to 98 */
    printf("a[2] = %d\n", *(p + 5)); /* Print modified a[2] */
    printf("");
    printf("a[2] = %d\n", a[2]); /* Print original a[2] */
    return (0);
}
