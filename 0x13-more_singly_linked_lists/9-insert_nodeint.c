#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Inserts a new node at a specified position
 * @head: ptr to the head of the linked list.
 * @idx: The index of the list where the new node should be added.
 * @n: The integer value to be stored in the new node.
 *
 * Return:if index is invalid, returns NULL
 * Otherwise, it returns the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *prevNode = NULL, *currentNode = *head;
	unsigned int t;

	if (!head)
		return (NULL);

	for (t = 0; currentNode && t < idx; t++)
	{
		prevNode = currentNode;
		currentNode = currentNode->next;
	}

	if (t != idx)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = currentNode;

	if (prevNode)
		prevNode->next = newNode;
	else
		*head = newNode;

	return (newNode);
}
