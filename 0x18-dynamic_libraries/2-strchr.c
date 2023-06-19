#include "main.h"
#include <stdio.h>

/**
 * _strchr - s used to search for a specific character in a string.
 * @s: a pointer to the string in which to search for the character.
 * @c: the character to search for.
 * Return: a pointer to the first occurrence of the character c
 *         in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}
