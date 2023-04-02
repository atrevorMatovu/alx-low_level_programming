#include "lists.h"

/**
 * add_node_end - add a new node at the beginning of a linked list
 * @head: pointer to the first node
 * @str: malloc'd string
 *
 * Return: a pointer to the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	tmp = *head;

	if (tmp == NULL)
	{
		*head = node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (*head);
}
