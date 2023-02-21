#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers until ninety eight
 *
 * @n: number in comparison
 * Return: always(0)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		int i;

		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
