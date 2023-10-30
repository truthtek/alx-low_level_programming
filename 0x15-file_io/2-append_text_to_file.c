#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
* append_text_to_file - Appends text to the end of a file.
* @filename: The name of the file.
* @text_content: The text content to append.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int r;
if (!filename)
return (-1);
if (!text_content)
return ((access(filename, F_OK) != -1) ? 1 : -1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
size_t len = 0;
while (text_content[len])
len++;
r = write(fd, text_content, len);
close(fd);
if (r == -1)
return (-1);
return (1);
}
