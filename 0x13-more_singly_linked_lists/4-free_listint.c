#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint - frees the lis
 * @head: ptr 2 ptr of list head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
