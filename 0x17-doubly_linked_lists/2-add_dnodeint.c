#include "lists.h"

/**
 * add_dnodeint - adds new node at start of list
 *
 * @head: list starter
 * @n: value of item
 * Return: address of new item
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newItem;
	dlistint_t *t;

	newItem = malloc(sizeof(dlistint_t));
	if (newItem == NULL)
		return (NULL);

	newItem->n = n;
	newItem->prev = NULL;
	t = *head;

	if (t != NULL)
	{
		do {
			t = t->prev;
		} while (t->prev != NULL);
	}

	newItem->next = t;

	if (t != NULL)
		t->prev = newItem;

	*head = newItem;

	return (newItem);
}
