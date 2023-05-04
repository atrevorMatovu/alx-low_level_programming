#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = 1;
	unsigned long int y = 0;

	do {
		x <<= 1;
	} while (x <= n);

	x >>= 1;

	do {
		y = x >> 1;
		if (n & x)
			_putchar('1');
		else
			_putchar('0');
		x = y;
	} while (x);
}
