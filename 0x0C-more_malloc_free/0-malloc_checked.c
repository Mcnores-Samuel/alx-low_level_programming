#include "main.h"
#include <stdlib.h>

/**
 * declare a pointer to the memory block
 * allocate memory using malloc of size b of the particular datatype
 * check if memory allocation was successful or return NULL if not
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
