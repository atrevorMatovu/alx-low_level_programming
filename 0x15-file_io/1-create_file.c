#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creat a new file => birth.
 * @filename: ptr to file name
 * @text_content: ptr to content
 *
 * Return: always (0) success.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	
	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		ssize_t numBytes = write(fd, text_content, strlen(text_content));
		if (numBytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
