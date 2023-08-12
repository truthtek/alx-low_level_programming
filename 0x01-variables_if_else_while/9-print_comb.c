#include <stdio.h>

void print_comb(int n, int m) // define a function that prints combinations of n digits from 0 to m
{
    int i, j; // declare two variables of type int
    static int arr[10]; // declare a static array of size 10
    if (n == 0) // base case: if n is zero
    {
        for (i = 0; i < m; i++) // loop from 0 to m
        {
            putchar(arr[i] + '0'); // convert arr[i] to a char and print it
        }
        if (arr[0] != 10 - m) // if not the last combination
        {
            putchar(','); // print a comma
            putchar(' '); // print a space
        }
        return; // return from the function
    }
    for (j = arr[m - n] + 1; j <= 10 - n; j++) // loop from arr[m - n] + 1 to 10 - n
    {
        arr[m - n] = j; // assign j to arr[m - n]
        print_comb(n - 1, m); // recursive call with n - 1 and m
    }
}

int main(void)
{
    print_comb(3, 3); // call the print_comb function with 3 and 3
    putchar('\n'); // print a new line
    return (0);
}
