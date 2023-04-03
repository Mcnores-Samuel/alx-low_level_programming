#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the linked list.
 * @head: pointer to the head node.
 * @n: new node data.
 * Return: pointer to teh address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current_node, *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));


	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current_node = *head;

	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	current_node->next = new_node;

	return (new_node);
}
