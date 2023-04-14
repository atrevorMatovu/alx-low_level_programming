#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads the content of file
 * @filename: name of file to be read
 * @letters: self made
 *
 * Return: always (0) success.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t ft, tlen;
	char *buff;

	if (!filename)
		return (0);

	ft = open(filename, O_RDONLY);
	buff = malloc(letters * sizeof(char));

	if (!buff)
		return (0);

	tlen = read(ft, buff, letters);
	close(ft);

	write(1, buff, tlen);
	free(buff);

	return (tlen);
}
