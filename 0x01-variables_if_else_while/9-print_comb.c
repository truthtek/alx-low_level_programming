#include <unistd.h>

int main(void)
{
    int i = 0;

    while (i < 10)
    {
        int j = i + 1;

        while (j < 10)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(',');
            putchar(' ');
            putchar(j / 10 + '0');
            putchar(j % 10 + '0');

            if (i != 8 || j != 9)
            {
                putchar(',');
                putchar(' ');
            }
            j++;
        }
        i++;
    }
    return (0);
}