#include "lists.h"

/**
 *free_list - Frees a list_t list
 *@head: a pointer to a head
 *
 *Return: Void
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
