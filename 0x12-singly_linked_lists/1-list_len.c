#include "lists.h"

/**
 * list_len - returns the number of elements in linked list.
 * @h: a linked list to calculate elements from.
 * Return: number of elements in linked list.
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
