#include "main.h"

/**
 * flip_bits - returns number of bits to be flipped
 * @n: number of bits
 * @m: position
 *
 * Return: bit number to be flipped like pies
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t = 0, a = (n ^ m);

	do {
		t += a & 1;
		a >>= 1;
	} while (a);

	return (t);
}
