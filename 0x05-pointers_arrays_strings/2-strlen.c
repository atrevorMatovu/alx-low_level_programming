#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the character
 * @leng: integer
 * Return: length of string
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
