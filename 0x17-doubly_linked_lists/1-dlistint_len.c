#include "lists.h"

/**
 * dlistint_len - calculate number of nodes in a dlistint_t list.
 * @h: pointer to head node of dlistint_t list.
 * Return: number of node in a dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
