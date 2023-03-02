#include "main.h"

/*
 * _strcmp - compares two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string.
 * Return: if no difference 0, otherwise -1 or 1
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0';)
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return s1[i] - s2[i];
	}
	else
	{
		return s1[i] - s2[i];
	}
}
