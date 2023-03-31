#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of the list_t list.
 * @h: list to print.
 * Return: the number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] [%s]", h->len, h->str);

		count++;
		h = h->next;
	}
	return (count);
}
