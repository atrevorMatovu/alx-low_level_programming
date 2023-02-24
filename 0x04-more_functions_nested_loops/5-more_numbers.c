#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i, f;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (f = 0; f <= 14; f++)
		{
			if (f >= 10)
				_putchar('1');
			_putchar(f % 10 + '0');
		}
		_putchar('\n');
	}
}

