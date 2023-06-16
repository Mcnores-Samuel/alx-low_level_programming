#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data(n)
 * of a dlistint_t linked list
 * @head: pointer to the head node of the dlistint_t list.
 * Return: the sum of all the data(n) of the list or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
