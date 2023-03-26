#include "main.h"
#include <stdlib.h>

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to the allocated memory
 *@old_size: old memory size in bytes
 *@new_size: new memory size in bytes
 *Return: pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == 0)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	return (ptr);
}
