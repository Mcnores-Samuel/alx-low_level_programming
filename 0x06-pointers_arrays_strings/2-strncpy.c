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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}

	while (i > n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
