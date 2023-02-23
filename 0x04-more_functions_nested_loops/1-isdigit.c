#include "main.h"

/**
 * _isdigit - a function that checks for a digit through 0 to 9
 *
 * @c: character to be checked
 * Return: 1 if c is a digit and 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
