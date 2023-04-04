#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint2 - frees the list setting head to null.
 * @head: ptr to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	do {
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	} while (*head != NULL);
	*head = NULL;
}
