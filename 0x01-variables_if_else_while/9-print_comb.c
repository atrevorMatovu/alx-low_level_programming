#include <stdio.h>
/**
 * main - main function
 *
 * Return: always(0) (success)
 */
int main(void)
{
	int m;

	for (m = 0 ; m < 10 ; m++)
	{
		putchar(m + 48);
	if (m != 9)
	{
		putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
