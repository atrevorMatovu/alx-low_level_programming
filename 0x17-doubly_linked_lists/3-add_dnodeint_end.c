#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end
 *
 * @head: list head
 * @n: item value
 * Return: address of new item
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t;
	dlistint_t *new;

	t = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (t != NULL)
	{
		while (t->next != NULL)
			t = t->next;
		t->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = t;

	return (new);
}
