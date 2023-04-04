#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index position.
 * @head: pointer to pointer to the address of a head node.
 * @index: a number to indicate the list indeces.
 * Return: 1 if success or -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *tmp;
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
		tmp = NULL;
		while (current_node != NULL)
		{
			if (i == index - 1)
			{
				tmp = current_node->next;
				current_node->next = tmp->next;
				free(tmp);
				return (1);

			}
			current_node = current_node->next;
			i++;
		}
	}
	return (-1);
}
