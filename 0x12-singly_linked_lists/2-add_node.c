#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list.
 * @head: pointer to pointer to head node
 * @str: pointer to string to assign as node data.
 * Return: 0 on success.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; new_node->str[i];)
		i++;
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
