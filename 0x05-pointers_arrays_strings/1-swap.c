#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int temp_a = *a;
	*a = *b;
	*b = temp_a;
}
