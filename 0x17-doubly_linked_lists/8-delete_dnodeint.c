#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list.
 * @head: double pointer to the head node to of the list.
 * @index: position at which a node is to be deleted.
 * Return: 1 if successfully deletes a node or -1 if failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *previous, *next_node, *current;

	if (head == NULL)
	return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		next_node->prev = NULL;
		free(*head);
		*head = next_node;
		return (1);
	}

	current = *head;

	while (index != 1)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
		index--;
	}

	previous = current->prev;
	next_node = current->next;

	previous->next = next_node;
	next_node->prev = previous;
	free(current);

	return (1);
}
