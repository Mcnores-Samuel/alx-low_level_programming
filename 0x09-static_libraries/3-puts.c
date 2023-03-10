#include "main.h"

/**
 * _puts - prints the string to the standard output.
 * @str: string to print.
 * Return: void.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
