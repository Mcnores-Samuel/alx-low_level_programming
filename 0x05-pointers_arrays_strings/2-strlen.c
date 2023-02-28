#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the string to count the length on.
 * Return: integers posing string length.
 */

int _strlen(char *s)
{
	int count = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		count += 1;
	}
	return (count);
}
