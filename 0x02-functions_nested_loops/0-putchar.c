#include "main.h"

int main(void)
{
    char *str = "_putchar\n";
    int i = 0;

    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }
    return (0);
}
