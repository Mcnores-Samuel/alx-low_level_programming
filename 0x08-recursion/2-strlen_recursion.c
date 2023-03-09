#include "main.h"

/**
 * _strlen_recursion - returns the length of the string.
 * @str: a pointer to the string to calculate the length.
 * Return: the length of the str.
 */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(str + 1));
}
