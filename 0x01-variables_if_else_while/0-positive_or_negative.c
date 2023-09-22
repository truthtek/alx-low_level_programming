#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
<<<<<<< HEAD
 * main - Entry point of the program
 *
=======
 * main - assigns a random number to the variable n each time
 * it is executed and prints whether the number stored in the variable n
 * is positive or negative.
>>>>>>> b00d4f4e98bf6207c099610347361e56db392bf2
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("The number %d is ", n);

    if (n > 0)
    {
        printf("positive\n");
    }
    else if (n == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative\n");
    }

    return (0);
=======
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
    /* your code goes there */
if (n <= 0)
{
if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
}
else
printf("%d is positive\n", n);
return (0);
>>>>>>> b00d4f4e98bf6207c099610347361e56db392bf2
}
