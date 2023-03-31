#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node at the end ot the linked list
 * @head: pointer to pointer to the head node of the list
 * @str: pointer to the string data.
 * Return: new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *last_node, *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; new_node->str[i];)
		i++;
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	return (new_node);
}
