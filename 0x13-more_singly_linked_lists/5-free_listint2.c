#include "lists.h"

/**
 * free_listint2 - frees the linked list and sets head to NULL
 * @head: pointer to the address of the head node.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
	}
}
