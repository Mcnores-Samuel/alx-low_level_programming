#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the address pt the head node
 * Return: the head node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	current_node = *head;
	*head = current_node->next;
	data = current_node->n;
	free(current_node);

	return (data);
}
