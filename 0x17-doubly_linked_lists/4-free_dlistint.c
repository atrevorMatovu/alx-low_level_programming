#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head list
 *
 * Return: void type
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
