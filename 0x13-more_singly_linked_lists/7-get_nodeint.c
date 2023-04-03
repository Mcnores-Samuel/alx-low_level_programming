#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the linked list.
 * @head: pointer to the address pointer of the head node
 * @index: the position at which the node is to be returned
 * Return: the pointer to the address of the node at index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		if (count == index - 1)
		{
			return (current_node);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}