#include "lists.h"

/**
 * dlistint_len - return number pf elements of list
 * @h: head list
 *
 * Return: Always success(0)
 */

size_t dlistint_len(const dlistint_t *h)
{
	int t;

	t = 0;

	if (h == NULL)
		return (t);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		t++;
		h = h->next;
	}

	return (t);
}
