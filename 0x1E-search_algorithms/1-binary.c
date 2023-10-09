#include "search_algos.h"

/**
 * search_algorithm - searches for a given value in an array using
 * binary_search algorithm.
 * @array: pointer to an array to search
 * @size: size of an array
 * @left: the lesser most position in the array
 * @right: the greater most position in the array
 * @search_value: a value to be searched in the array
 * Return: an index of the value in the array or -1 otherwise
 */
int search_algorithm(int *array, size_t size,
		int left, int right, int search_value)
{
	int mid_point;
	int trav_from;

	if (right >= left)
	{
		trav_from = left;

		printf("Searching in array: ");
		while (trav_from <= right)
		{
			printf("%d", array[trav_from]);
			if (trav_from != right)
				printf(", ");
			trav_from++;
		}
		printf("\n");
		mid_point = left + (right - left) / 2;

		if (array[mid_point] == search_value)
			return (mid_point);

		if (array[mid_point] < search_value)
			return (search_algorithm(array, size,
						mid_point + 1, right, search_value));
		return (search_algorithm(array, size, left,
					mid_point - 1, search_value));
	}
	return (-1);
}

/**
 * binary_search - invokes search_algorithm function to perform a
 * search.
 * @array: an array to be searched
 * @size: size of the array
 * @value: value to be searched in the array
 * Return: index of the value searched or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);
	index = search_algorithm(array, size, 0, size - 1, value);
	return (index);
}
