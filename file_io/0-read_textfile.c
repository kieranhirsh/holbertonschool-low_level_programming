#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: the file
 * @letters: then number of characters to print
 *
 * Return: the number of characters printed
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	int fd = open(filename, O_RDONLY);
	int bytesread = read(fd, buffer, letters);

	close(fd);

	if ((filename == NULL) || (fd == -1) || (buffer == NULL))
		return (0);

	return (write(STDOUT_FILENO, buffer, bytesread));
}

