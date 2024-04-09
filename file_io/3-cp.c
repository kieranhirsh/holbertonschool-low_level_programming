#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * close_file - closes a file
 * @fd: the file descriptor
 *
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

/**
 * main - check the code
 * @argc: the number of command line arguments passed to the program (unused)
 * @argv: the command line arguments passed to the program
 *
 * Return: 0, if success
 *         97, if incorrect number of arguments received
 *         98, if file_from does not exist or can't be read
 *         99, if file_to can't be created or written to correctly
 *         100, if a file descriptor can't be closed
 *
 */
int main(int argc, char **argv)
{
	char *buffer[1024];
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fdfrom = open(file_from, O_RDONLY);
	int fdto = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	int bytesread, byteswritten;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		return (99);
	}
	do {
		bytesread = read(fdfrom, buffer, bytesread);
		if (bytesread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			return (98);
		}
		byteswritten = write(fdto, buffer, bytesread);
		if (byteswritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			return (99);
		}
	} while (bytesread != 0);
	close_file(fdfrom);
	close_file(fdto);
	return (0);
}

