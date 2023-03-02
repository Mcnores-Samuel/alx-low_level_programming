#include "main.h"

/**
 * _strncpy - copies each character to the corresponding index
 * of the destination string, up to a maximum of n characters.
 * @dest: string destination.
 * @src: string source.
 * @n: maximum number of characters.
 * Return: returns a pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			dest[j] = src[j];
		}
	}

	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
