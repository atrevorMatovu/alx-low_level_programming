#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number
 * @b: pointing to a string
 *
 * Return: the converted number or 0 if there is more chars
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	for (; *b; ++b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		res <<= 1;
		if (*b == '1')
			res += 1;
	}

	return (res);
}
