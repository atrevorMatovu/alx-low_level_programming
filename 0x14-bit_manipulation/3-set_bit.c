#include "main.h"
#include <stddef.h>
/**
 * set_bit - set the value of a bit to 1
 * @n: ptr to an int
 * @index: an integer
 *
 * Return: always (0) success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1UL << index;
	return (1);
}
