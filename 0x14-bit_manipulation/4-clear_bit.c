#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: position of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 64;
	unsigned long int y;

	if (index >= x)
		return (-1);

	y = ~(1UL << index);
	*n &= y;

	return (1);
}
