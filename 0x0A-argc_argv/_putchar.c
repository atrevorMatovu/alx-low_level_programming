#include <stdio.h>
#include "main.h"

/**
 * _putchar -writes the character to the standard output
 * @c: character to be printed
 * Return: On success 1.
 * On error, -1 is returned 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
