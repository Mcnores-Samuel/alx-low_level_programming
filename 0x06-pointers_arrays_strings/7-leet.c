#include "main.h"


/**
 * leet - encodes a string into 1337.
 * @str: pointer to string to encode.
 * Return: pointer to the encoded string.
 */

char *leet(char *str)
{
	char str_swap[] = "aAeEoOtTlL";
	char n_swap[] = "4433007711";
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; str_swap[y] != '\0'; y++)
		{
			if (str[x] == str_swap[y] && y < 10)
			{
				str[x] = n_swap[y];
			}
		}
	}
	return (str);
}
