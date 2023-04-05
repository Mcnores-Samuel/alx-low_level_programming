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
	listint_t *tmp, *new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	tmp = *head;
	i = 1;

	while (i < idx && tmp)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		i++;
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
