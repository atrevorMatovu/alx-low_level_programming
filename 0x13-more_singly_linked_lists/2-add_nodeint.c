#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the start of the listint_t list.
 * @head: ptr to ptr to the list head
 * @n: int to be added to the new node
 *
 * Return: address of the new element, or null.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
