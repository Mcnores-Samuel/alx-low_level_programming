#include "main.h"

/**
 * rev_string - reverses the string
 * @string: string to reverse.
 * Return: nothing;
 */

void rev_string(char *string)
{
	int str_len = 0, char_pos = 0, position;
	char str_temp;

	while (string[str_len] != '\0')
	{
		str_len++;
	}

	position = str_len - 1;
	for (; position >= str_len / 2; position--)
	{
		str_temp = string[position];
		string[position] = string[char_pos];
		string[char_pos] = str_temp;
		char_pos++;
	}
}
