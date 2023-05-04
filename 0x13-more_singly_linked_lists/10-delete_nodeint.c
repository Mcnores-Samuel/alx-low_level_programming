#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index position.
 * @head: pointer to pointer to the address of a head node.
 * @index: a number to indicate the list indeces.
 * Return: 1 if success or -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	if (index > 0)
	{
		current_node = *head;

		while (current_node != NULL && i < index - 1)
		{
			current_node = current_node->next;
			i++;
		}

		tmp = current_node->next;
		current_node->next = tmp->next;
		if (tmp != NULL)
		{
			free(tmp);
			return (1);
		}
		else
			return (-1);
	}
	return (-1);
}
