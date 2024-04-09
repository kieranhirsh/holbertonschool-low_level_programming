#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: the name of the file to append text to
 * @text_content: the content to append
 *
 * Return: 1, on success
 *         -1, on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_RDWR | O_APPEND);
	int len = 0;
	int byteswritten;

	if ((filename == NULL) || (fd == -1))
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[len] != '\0')
		len += 1;

	byteswritten = write(fd, text_content, len);
	close(fd);

	if (byteswritten != len)
		return (-1);

	return (1);
}

