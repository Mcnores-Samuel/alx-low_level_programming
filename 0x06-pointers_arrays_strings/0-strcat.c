#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two string.
 * @dest: base string to join with another string
 * @src: source to join to dest
 * Return: concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	char *endofstr = dest + strlen(dest);

	while (*src != '\0')
	{
		*endofstr++ = *src++;
	}
	endofstr = '\0';

	return dest;
}
