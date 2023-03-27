#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a 
 *                parameter on each element of an array.
 * @array: pointer to an array to iterate.
 * @size: size of array.
 * @action: pointer to the function to execute array elements.
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
