#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: ptr to head of the list
 * @index: index of node to return
 *
 * Return: ptr to nth node or null id not existing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;

	for (t = 0; t < index; t++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}
	return (current);
}
