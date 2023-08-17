#include "lists.h"

/**
 * print_dlistint - prints all elements of that list
 * dlistint_t list
 * @h: list head
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int idx;

	idx = 0;

	if (h == NULL)
		return (idx);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		idx++;
		h = h->next;
	}

	return (idx);
}
