#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * exit_case - handles errors poorly (is prone to user error)
 * @code: the error code
 * @filename: the name of the file that is causing the error
 * @fd: the file descriptor that is causing the error
 *
 */
void exit_case(int code, char *filename, int fd)
{
	switch (code)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(code);
	}
}

/**
 * open_src - opens the source file
 * @filename: the name of the file to open
 *
 * Return: the file descriptor of the opened file
 */
int open_src(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		exit_case(98, filename, 0);

	return (fd);
}

/**
 * open_dest - opens the destination file
 * @filename: the name of the file to open
 *
 * Return: the file descriptor of the opened file
 */
int open_dest(char *filename)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
		exit_case(99, filename, 0);

	return (fd);
}

/**
 * close_file - closes a file
 * @fd: the file descriptor
 *
 */
void close_file(int fd)
{
	if (close(fd) == -1)
		exit_case(100, NULL, fd);
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
	int buffersize = 1024;
	char *buffer;
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fdfrom, fdto, bytesread, byteswritten;

	buffer = malloc(sizeof(char) * buffersize);

	if (argc != 3)
		exit_case(97, NULL, 0);

	fdfrom = open_src(file_from);
	fdto = open_dest(file_to);

	do {
		bytesread = read(fdfrom, buffer, buffersize);

		if (bytesread == -1)
			exit_case(98, file_from, 0);

		byteswritten = write(fdto, buffer, bytesread);

		if (byteswritten == -1)
			exit_case(99, file_to, 0);
	} while (bytesread == buffersize);

	close_file(fdfrom);
	close_file(fdto);
	free(buffer);

	return (0);
}

