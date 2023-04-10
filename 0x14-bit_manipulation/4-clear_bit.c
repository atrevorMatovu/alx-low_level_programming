#include "main.h"
#include <stddef.h>
/**
 * clear_bit - set value of a bit to 0
 * @n: ptr to an integer
 * @index: an integer returned
 *
 * Return: always success(0)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
