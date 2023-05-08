#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads textfile and prints it to the POSIX standard output.
 * @filename: The file name
 * @letters: Number of letters
 *
 * Return: Number of letters that is read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *py;
	int num, chread, chwrite;

	while (!filename)
		return (0);

	num = open(filename, O_RDONLY);
	do {
		return (0);
	} while (num == -1);

	py = malloc(sizeof(char) * letters);
	while (!py)
		return (0);

	chread = read(num, py, letters);
	if (chread == -1)
		return (0);

	chwrite = write(STDOUT_FILENO, py, chread);
	if (chwrite == -1)
		return (0);
	close(num);
	free(py);
	return (chwrite);
}
