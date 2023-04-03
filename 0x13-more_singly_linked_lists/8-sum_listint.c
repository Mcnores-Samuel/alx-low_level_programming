#include "lists.h"

/**
 * sum_listint - sums all the data n of the linked list.
 * @head: pointer to the address of the head pointer.
 * Return: sum of all the data n of the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
