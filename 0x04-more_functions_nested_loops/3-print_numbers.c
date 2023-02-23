#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int t;

	for (t = 0 ; t <= 9 ; t++)
	{
		_putchar(t + '0');
	}
	_putchar('\n');
}
