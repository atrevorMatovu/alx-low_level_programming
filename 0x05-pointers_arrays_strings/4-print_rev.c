#include "main.h"

/**
 * print_rev - reverse a string output
 * @s: pointer character here
 */
void print_rev(char *s)
{
	int i;

	i = str_length(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
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
