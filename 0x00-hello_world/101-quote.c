#include <unistd.h>

int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(message) - 1;

    write(STDERR_FILENO, message, len);
    return (1);
}
