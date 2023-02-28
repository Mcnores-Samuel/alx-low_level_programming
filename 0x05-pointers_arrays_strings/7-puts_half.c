#include "main.h"

/**
 * puts_half - prints half the string.
 * @str: string.
 * Return: void.
 */

void puts_half(char *str)
{
	int str_len = 0, str_mid, i;

	while (str[str_len] != '\0')
		str_len++;

	if (str_len % 2 == 0)
		str_mid = str_len / 2;
	else
		str_mid = (str_len / 2) + 1;

	for (i = str_mid; i < str_len; i++)
		_putchar(*(str + i));
	_putchar('\n');

}
