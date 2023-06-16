#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a position index.
 * @head: pointer to the head node of the dlistint_t list.
 * Return: pointer to the node at position index or NULL otherwise.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t n = 0;

	for (n = 0; head != NULL && n < index; n++)
	{
		if (n == index - 1 && head)
			return (head);
		head = head->next;
	}
	return (NULL);
}
