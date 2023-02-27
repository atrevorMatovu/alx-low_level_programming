#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * str_length: prints number of characters.
 * @s: store character.
 * @: store character.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = str_length(s);

	begin = s;
	end = s;

	for (c = 0; c < (length - 1); c++)
		end++;

	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
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
