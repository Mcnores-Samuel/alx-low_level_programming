#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the address of the head node.
 * @idx: the index to insert the new node.
 * @n: data for the new node.
 * Return: pointer to the address of the new_node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);

	if (idx == 0 && *head != NULL)
	{
		new_node = (listint_t *)malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	current_node = *head;
	while (current_node != NULL && count < idx - 1)
	{
		current_node = current_node->next;
		count++;
	}

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (current_node != NULL)
	{
		new_node->n = n;
		new_node->next = current_node->next;
		current_node->next = new_node;
	}

	return (new_node);
}
