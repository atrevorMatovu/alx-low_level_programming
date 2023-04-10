#include "main.h"
#include <stddef.h>
/**
 * flip_bits - returns number of bits required to do a flip
 * @m: long integer
 * @n: long integer
 *
 * Return: always succes (0)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differ = n ^ m;
	unsigned int cout = 0;

	do {
		cout += differ & 1;
		differ >>= 1;
	} while (differ != 0);

	return (cout);
}
