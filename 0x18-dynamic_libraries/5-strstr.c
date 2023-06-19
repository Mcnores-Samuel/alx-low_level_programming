#include "main.h"

/**
 * _strstr - is used to search for a substring within a string.
 * @haystack: a pointer to the string to be searched.
 * @needle: a pointer to the substring to search for.
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x];)
	{
		for (y = 0; needle[y] && haystack[x] == needle[0];)
		{
			if (haystack[x + y] == needle[y])
				y++;
			else
				break;
		}
		if (needle[y])
		{
			x++;
			y = 0;
		}
		else
			return (haystack + x);
	}
	return (0);
}
