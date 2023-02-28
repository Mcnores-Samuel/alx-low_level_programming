#include "main.h"

/**
 * print_rev - prints a string reverse.
 * @s: the string to print.
 * Return: nothing.
 */

void print_rev(char *s)
{
	int str_len = 0, i;

	while (s[str_len] != '\0')
	{
		str_len++;
	}

	for (i = str_len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
