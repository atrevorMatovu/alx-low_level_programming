#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Changes binary number to an unsigned int
 * @b: Pointer to string with binary number
 *
 * Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i = 0;

	while (b == NULL)
		return (0);
	do {
		if (b[i] != '0' && b[i] != '1')
			return (0);
		x <<= 1;

		if (b[i] == '1')
			x = x + 1;
		i++;
	} while (b[i] != '\0');

	return (x);
}
