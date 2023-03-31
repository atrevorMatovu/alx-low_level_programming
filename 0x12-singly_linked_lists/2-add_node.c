#include "lists.h"
#include <stddef.h>
#include <string.h>

/**
 * add_node - add a new node at the beginning of a linked list
 * @head: pointer to the first node
 * @str: malloc'd string
 *
 * Return: a pointer to the list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	node->str = strdup(str);
	node->len = strlen(str);

	if (*head == NULL)
		node->next = NULL;
	else
		node->next = *head;
	*head = node;
	return (*head);
}
