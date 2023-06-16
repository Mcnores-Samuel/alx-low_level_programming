#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double pointer to the head node of the dlistint_t list.
 * @n: data for the new_node node to be added at the end.
 * Return: pointer to the new_node or NULL otherwise.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
		
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	(*head)->next = new_node;
	new_node->prev = *head;
	return (new_node);
}
