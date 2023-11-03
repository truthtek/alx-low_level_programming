#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: A pointer to the filename to read
 * @letters: The number of letters to read and print
 *
 * Return: Actual number of letters read and printed.
 * 0 if filename is NULL or fail to read/write
 */ 
ssize_t read_textfile(const char *filename, size_t letters)
{
        int fd;
        ssize_t num_read, num_written;
        char *buf;

        if (filename == NULL)
                return (0);

        fd = open(filename, O_RDONLY);
        if (fd == -1)
                return (0);

        buf = malloc(sizeof(char) * letters);
        if (buf == NULL)
                return (0);

        num_read = read(fd, buf, letters);
        if (num_read == -1)
        {
                free(buf);
                close(fd);
                return (0);
        }

        num_written = write(STDOUT_FILENO, buf, num_read);
        if (num_written == -1 || num_written != num_read)
        {
                free(buf);
                close(fd);
                return (0);
        }

        free(buf);
        close(fd);

        return (num_written);
}
