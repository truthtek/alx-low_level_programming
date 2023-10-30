#include "main.h"

#define BUFF_SIZE 1024

/**
* main - Copies a file
* @argc: Number of arguments
* @argv: Argument strings
*
* Return: 0 on success, error code on failure
*/
int main(int argc, char *argv[])
{
int from_fd, to_fd, r, w;
char buffer[BUFF_SIZE];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
from_fd = open(argv[1], O_RDONLY);
if (from_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (to_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((r = read(from_fd, buffer, BUFF_SIZE)) > 0)
{
w = write(to_fd, buffer, r);
if (w != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(from_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
exit(100);
}
if (close(to_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
exit(100);
}
return (0);
}
