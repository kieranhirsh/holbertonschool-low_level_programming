#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a text file
 * @filename: the name of the file to create
 * @text_content: the content of the file to create
 *
 * Return: 1, on success
 *         -1, on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
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

