#include "main.h"
#include <stddef.h>
/**
 * print_binary - prints the binary representation
 * @n: the integer returned
 *
 * Return: Always succes(0)
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) ? '1' : '0');
}
