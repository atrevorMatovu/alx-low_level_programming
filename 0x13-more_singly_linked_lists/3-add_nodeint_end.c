#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of a listint_t list.
 * @head: ptr to ptr to the list head
 * @n: int to be added to new node
 *
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		listint_t *lNode = *head;

		do {
			lNode = lNode->next;
		} while (lNode->next != NULL);
		lNode->next = newNode;
	}
	return (newNode);
}
