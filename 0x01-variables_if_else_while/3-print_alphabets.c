#include <stdio.h>
/**
 * main - main function
 *
 * Return: always(0) (success)
 */

int main(void)
{
	char t;

	for (t = 'a' ; t <= 'z' ; t++)
		putchar(t);
	for (t = 'A' ; t <= 'Z' ; t++)
		putchar(t);
	putchar('\n');
	return (0);
}
