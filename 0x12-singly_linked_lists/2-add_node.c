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

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = *head;

	*head = new_node;
	return (0);
}
