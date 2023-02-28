#include "main.h"

/**
 * puts2 - skips the next character in a string.
 * @string: string.
 * Return: nothing;
 */

void puts2(char *string)
{
	int str_len = 0, string_size, i;

	while (string[str_len] != '\0')
	{
		str_len++;
	}

	string_size = str_len;

	for (i = 0; i < string_size; i += 2)
	{
		_putchar(*(string + i));
	}
	_putchar('\n');

}
