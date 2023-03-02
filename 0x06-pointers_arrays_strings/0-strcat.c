#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two string.
 * @dest: Pointer to the string to which the
 *        source string will be appended.
 * @src: Pointer to the string that will be
 *       appended to the destination string.
 * Return:  pointer to the destination string..
 */

char *_strcat(char *dest, char *src)
{
	char *endofstr = dest + strlen(dest);

	while (*src != '\0')
	{
		*endofstr++ = *src++;
	}
	endofstr = '\0';

	return (dest);
}
