#include "main.h"
#include <stddef.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @index: starts from 0 of the bit
 * @n: an integer
 *
 * Return: always success(0) or...
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int thing;
	
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	thing = 1UL << index;
	return ((n & thing) ? '1' : '0');
}
