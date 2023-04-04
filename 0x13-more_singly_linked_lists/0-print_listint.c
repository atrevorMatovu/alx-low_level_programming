#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint -prints all elements of a listint_t list
 * @h: pointer to head of the list
 *
 * Return: number of nodes in the lists
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	do {
		printf("%d\n", h->n);
		h = h->next;
		count++;
	} while (h);
	return (count);
}
