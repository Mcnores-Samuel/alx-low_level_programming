#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list.
 * @head: pointer to the list to free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;

	while (head != NULL)
	{
		ptr = head;
		head = ptr->next;
		free(ptr->str);
		free(ptr);
	}
}
