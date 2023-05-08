#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file -  creates a file
 * @filename:  name of the file to create
 * @text_content: a NULL terminated string
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int num, chwrite, len = 0;

	while (filename == NULL)
		return (-1);

	num = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (num == -1)
		return (-1);

	while (!(text_content == NULL))
	{
		do {
			len++;
		} while (text_content[len]);

		chwrite = write(num, text_content, len);
		if (chwrite != len)
			return (-1);
	}
	close(num);
	return (1);
}
