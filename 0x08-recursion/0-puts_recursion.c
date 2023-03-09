#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line through
 *                   recursive opeartion.
 * @str: pointer to the string to print.
 * Return: void;
 */

void _puts_recursion(char *str)
{
	int i = 0;

	if (*(str + i) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(str + i));
	_puts_recursion(str + (i + 1));
}
