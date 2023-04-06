#include "lists.h"
#include <stdio.h>

listint_t *reverse_listint(listint_t **head)
{
	listint_t *list_ptr;

	if (*head == NULL)
		return (NULL);

	list_ptr = reverse_listint(((*head)->next));
	printf("%d\n", (*head)->n);

	return (list_ptr);
}
