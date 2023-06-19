#include "main.h"

/**
 * _strspn -  calculates the length of the initial segment of a string
 *            that consists entirely of characters from a specific set
 * @s: a pointer to the string to be searched.
 * @accept: a pointer to a string containing the set of
 *         characters to match.
 * Return: the number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] != accept[j])
			break;
	}
	return (i);
}
