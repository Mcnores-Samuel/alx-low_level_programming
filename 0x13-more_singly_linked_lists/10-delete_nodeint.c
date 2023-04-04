#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index position.
 * @head: pointer to pointer to the address of a head node.
 * @index: a number to indicate the list indeces.
 * Return: 1 if success or -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev;
	unsigned int i;

	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	if (index > 0)
	{
		current_node = *head;
		prev = *head;
		while (current_node->next != NULL && i < index)
		{
			prev = current_node;
			current_node = current_node->next;
			i++;
		}
		prev->next = current_node->next;
		free(current_node);
		return (1);
	}
	return (-1);
}
