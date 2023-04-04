#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the headnode of list, returns the data of headnode
 *
 * @head: ptr to list head
 *
 * Return: the head node's data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	d = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (d);
}
