#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head node.
 * Return: total number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
