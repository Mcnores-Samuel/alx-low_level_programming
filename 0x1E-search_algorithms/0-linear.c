#include "search_algos.h"

/**
 * linear_search - performs a linear search of a value in
 * the array.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: a value to be searched in an array
 * Return: index of the value in the array or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t offset = 0;

	if (array == NULL)
		return (-1);

	while (offset < size)
	{
		printf("Value checked array[%ld] = [%d]\n",
				offset, array[offset]);
		if (array[offset] == value)
			return (offset);
		offset++;
	}
	return (-1);
}
