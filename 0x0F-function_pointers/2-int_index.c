#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for array element index;
 * @array: pointer to the array to search.
 * @size: the size of an array.
 * @cmp: pointer to a function to perform the search.
 * Return: index of the non mutching element or 0 if not.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (0);

}
