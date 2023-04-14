#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFSIZE 1024

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 * Return: 0 on success, or the corresponding error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, len;
	char buffer[BUFSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while (len == BUFSIZE)
	{
		len = read(fd_from, buffer, BUFSIZE);

		if (len == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (write(fd_to, buffer, len) == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
