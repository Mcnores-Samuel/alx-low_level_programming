#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a position index.
 * @head: pointer to the head node of the dlistint_t list.
 * @index: position at which to return the node pointer
 * Return: pointer to the node at position index or NULL otherwise.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	while (head != NULL && index != 0)
	{
		head = head->next;
		index--;
	}

	return (head);
}
