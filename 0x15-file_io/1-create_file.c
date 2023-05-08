#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* create_file - creates a file and writes a string to it
*
* @filename: name of the file to create
* @text_content: string to write to the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd, size, len = 0;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

if (!text_content)
{
close(fd);
return (1);
}

while (text_content[len])
len++;

size = write(fd, text_content, len);
close(fd);

if (size == -1)
return (-1);

return (1);
}
