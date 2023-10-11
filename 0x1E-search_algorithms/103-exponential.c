#include "search_algos.h"

/**
 * search_algorithm - searches for a given value in an array using
 * binary_search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: size is the number of elements in array
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
 * b_search - invokes search_algorithm function to perform a
 * search.
 * @array: is a pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: value to be searched in the array
 * @left: the lesser most position in the array
 * @right: the greater most position in the array
 * Return: index of the value searched or -1 otherwise
 */
int b_search(int *array, size_t size, int value, int left, int right)
{
	int index;

	if (array == NULL)
		return (-1);
	index = search_algorithm(array, size, left, right, value);
	return (index);
}

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: is a pointer to the first element of the array
 * @size: number of elements in the array
 * @value: a value to search for.
 * Return: index of the value searched or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	int exp = 1, prev;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);

	while (exp < (int)size && array[exp] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", exp, array[exp]);
		prev = exp;
		exp *= 2;
	}
	if (exp > (int)size || exp == (int)size)
		exp = exp - 1;

	printf("Value found between indexes [%d] and [%d]\n", prev, exp);
	return (b_search(array, size, value, prev, exp));
}
