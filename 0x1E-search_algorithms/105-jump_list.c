#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 * Return: pointer to the node containing a value searched or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current, *act_node;
	int jump = (int)sqrt(size), step = 0;

	if (list == NULL)
		return (NULL);

	act_node = current = list;

	while (step < (int)size && current->index + 1 <
			size && current->n < value)
	{
		act_node = current;
		step += jump;
		while (current->index < step)
		{
			if (current->index + 1 == size)
				break;
			current = current->next;
		}
		printf("Value checked at index [%ld] = [%d]\n",
				current->index, current->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			act_node->index, current->index);

	while (act_node->index < current->index && act_node->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				act_node->index, act_node->n);
		act_node = act_node->next;
	}
	printf("Value checked at index [%ld] = [%d]\n",
			act_node->index, act_node->n);
	if (act_node->n == value)
		return (act_node);
	return (NULL);
}
