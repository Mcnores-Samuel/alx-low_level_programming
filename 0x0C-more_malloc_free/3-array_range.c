#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: mimimum number element of the array
 * @max: maxmum number element of the array
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j = 0;

	if (min > max)
	{
		return (NULL);
	}

	ptr = (int *)malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = min; i >= min && i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
