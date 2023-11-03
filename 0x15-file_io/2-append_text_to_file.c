#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
* append_text_to_file - Appends text to the end of a file
* @filename: The file to append to
* @text_content: The text content to append
*
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int bytes_written;
size_t len;
if (!filename)
return (-1);
if (!text_content)
return (access(filename, F_OK) != -1 ? 1 : -1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
for (len = 0; text_content[len]; len++)
;
bytes_written = write(fd, text_content, len);
if (bytes_written == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
