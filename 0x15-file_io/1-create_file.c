#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
* create_file - Creates a file and writes text content to it.
* @filename: The name of the file to create.
* @text_content: The text content to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd;
mode_t mode = S_IRUSR | S_IWUSR;
if (!filename)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
if (fd == -1)
return (-1);
if (text_content)
{
size_t len = 0;
while (text_content[len])
len++;
if (write(fd, text_content, len) == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
