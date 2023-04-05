#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node that's specified
 * @head: ptr to list head
 * @index: index of node to be deleted.
 *
 * Return: 1 if the node was deleted succesfully, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	prev = *head;
	tmp = (*head)->next;

	for (i = 1; i < index && tmp != NULL; i++)
	{
		prev = tmp;
		tmp = tmp->next;
	}

	if (tmp == NULL)
		return (-1);

	prev->next = tmp->next;
	free(tmp);

	return (1);
}
