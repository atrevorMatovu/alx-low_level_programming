#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * sum_listint - Return the sum of all the data (n) of a listint list
 *
 * @head: ptr to the head node of the list.
 *
 * Return: sum of all the data of the list.
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	do {
		sum += head->n;
		head = head->next;
	} while (head != NULL);

	return (sum);
}
