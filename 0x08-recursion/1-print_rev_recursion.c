#include "main.h"

/**
 * _print_rev_recursion -  prints a string in reverse using recursion.
 * @str: pointer to the string to print.
 * Return: void;
 */

void _print_rev_recursion(char *str)
{
	if (*str == '\0')
	{
		return;
	}
	_print_rev_recursion(str + 1);
	_putchar(*str);
}
