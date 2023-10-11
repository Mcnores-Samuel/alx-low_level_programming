#include "search_algos.h"

/**
 * interpo_search_helper - searches a value in the array.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * @low: lower index of the array ex: 0
 * @high: higher index of the array ex: size - 1.
 * Return: index of the value or -1 if not found
 */
int interpo_search_helper(int *array, size_t size,
		int value, int low, int high)
{
	size_t pos = low + (((double)(high - low) /
				(array[high] - array[low])) *
				(value - array[low]));

	if (pos > size - 1)
		printf("Value checked array[%ld] is out of range\n", pos);

	if (low <= high && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			return (interpo_search_helper(array, size,
						value, pos + 1, high));
		return (interpo_search_helper(array, size,
					value, low, pos - 1));
	}
	return (-1);
}

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index of the value or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (interpo_search_helper(array, size,
				value, 0, size - 1));
}
