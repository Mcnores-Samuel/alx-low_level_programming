#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head node of the dlistint_t list.
 * @idx: position to insert a new node if valid.
 * @n: data(n) for data field in a new node.
 * Return: pointer to the new node or NULL otherwise.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current, *temp;

	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	while (idx != 1)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		idx--;
	}

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	temp = current->next;
	current->next = new_node;
	new_node->next = temp;
	temp->prev = new_node;
	new_node->prev = current;

	return (new_node);
}
