#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	do {
		h = h->next;
		m++;
	} while (h);
	return (m);
}
