#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Returns: 0 if endian is big, 1 if is little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *y = (char *)&x;

	if (*y)
		return (1);
	else
		return (0);
}
