#include "lists.h"

/**
 * sum_dlistint - returns the sum of data of
 * a dlistint_t linked list
 *
 * @head: list head
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total;

	total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}
