#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: s the number of elements in array
 * @value: is the value to search for
 * Return: index of the value searched or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = (int)sqrt(size), prev = 0, step = 0;
	int i;

	if (array == NULL)
		return (-1);

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	for (i = prev; i <= step && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
