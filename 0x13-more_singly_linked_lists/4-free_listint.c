#include "lists.h"

/**
 * free_listint - frees a linked list.
 * @head: pointer to the address of the head node.
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = current_node->next;
		free(current_node);
	}
}
