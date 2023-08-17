#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 *
 * @head: list start
 * @index: position of node
 * Return: 1 success, -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t;
	dlistint_t *m;
	unsigned int i;

	t = *head;

	if (t != NULL)
		while (t->prev != NULL)
			t = t->prev;

	i = 0;

	while (t != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = t->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				m->next = t->next;

				if (t->next != NULL)
					t->next->prev = m;
			}

			free(t);
			return (1);
		}
		m = t;
		t = t->next;
		i++;
	}

	return (-1);
}
