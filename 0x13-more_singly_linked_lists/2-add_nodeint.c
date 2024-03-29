#include "lists.h"

/**
 * add_nodeint - adds a new node the beginning of the list.
 * @head: pointer to the current head node
 * @n: node data.
 * Return: pointer to the address of the new node.
 * or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
