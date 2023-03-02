#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings,
 *           it will use the most n byte from src
 * @dest: Pointer to the string to which
 *        the source string will be appended
 * @src: Pointer to the string that will be
 *       appended to the destination string
 * @n: Maximum number of characters to be appended.
 *
 * Return: returns a pointer to the destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr_to_endofstr = dest + strlen(dest);
	int i = 0;

	while (i < n && *src != '\0')
	{
		*ptr_to_endofstr++ = *src++;
	}
	*ptr_to_endofstr = '\0';

	return (dest);
}
