#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * in a list
 *
 * @head: list head
 * @index: position of the node
 * Return: NULL if node don't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int t;
	dlistint_t *tnt;

	t = 0;
	if (head == NULL)
		return (NULL);

	tnt = head;
	while (tnt)
	{
		if (index == t)
			return (tnt);
		t++;
		tnt = tnt->next;
	}

	return (NULL);
}
