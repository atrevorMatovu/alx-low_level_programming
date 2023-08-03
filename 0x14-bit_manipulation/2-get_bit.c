#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: a position
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int t = 64;
	
	if (index >= t)
		return (-1);
	while (n == 0)
		return (0);

	if (((n >> index) & 1) != 0)
		return (1);
	return (0);
}
