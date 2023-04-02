#include "lists.h"

/**
 * free_list - free a singly list link
 *
 * @head: pointer to the first node of the list
*/
void free_list(list_t *head)
{
	list_t *n;

	while ((n = head) != NULL)
	{
		head = head->next;
		free(n->str);
		free(n);
	}
}
