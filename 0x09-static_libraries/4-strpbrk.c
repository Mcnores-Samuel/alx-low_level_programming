#include "main.h"

/**
 * _strpbrk - is used to search a string for the first occurrence
 *            of any character from a set of characters.
 * @str: a pointer to the string to be searched.
 * @set: a pointer to the set of characters to search for.
 * Return: a pointer to the byte in s that matches one of the bytes
 *         in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *str, char *set)
{
	int x, y;

	for (x = 0; str[x]; x++)
	{
		for (y = 0; set[y]; y++)
		{
			if (str[x] == set[y])
				break;
		}
		if (set[y])
			return (str + x);
	}
	return (0);
}
