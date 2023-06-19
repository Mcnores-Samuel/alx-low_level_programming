#include "main.h"

/**
 * _strcpy - copies the string pointed to by source.
 * @destination: destination of the copied string.
 * @source: string source or input.
 * Return: the pointer to destination.
 */

char *_strcpy(char *destination, char *source)
{
	char *ptr_to_dest = destination;

	while (*source != '\0')
	{
		*ptr_to_dest++ = *source++;
	}
	*ptr_to_dest = '\0';

	return (destination);
}
