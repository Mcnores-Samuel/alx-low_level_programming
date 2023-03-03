#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * rot13 - encodes a string using rot13.
 * @str: pointer to string.
 * Return: pointer to encoded string.
 */

char *rot13(char *str)
{
	int i, shift;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (isalpha(str[i]))
		{
			shift = isupper(str[i]) ? 'A' : 'a';
			str[i] = (str[i] - shift + 13) % 26 + shift;
		}
	}
	return (str);
}
