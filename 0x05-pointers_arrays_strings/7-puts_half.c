#include "main.h"

/**
 * puts_half - print half of a string.
 * @str: character
 */
void puts_half(char *str)
{
	int m, n, i, j;

	m = str_length(str) / 2;

	if (str_length(str) % 2 == 0)
	{
		for (i = m; i < str_length(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else if (str_length(str) % 2 != 0)
	{
		n = (str_length(str) - 1) / 2;
		for (j = n; j <= str_length(str); j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}

/**
  * str_length - finds the length of a string.
  * Return: length of c.
  * @pointer: pointer.
  */
int str_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
