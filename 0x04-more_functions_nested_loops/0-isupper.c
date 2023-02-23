#include "main.h"

/**
 * _isupper(int c) - returns a value to show whether the character passed to it
 * is uppercase or not.
 *
 * _isupper - a function that checks for uppercase character.
 *
 * @c: character to be checked
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
