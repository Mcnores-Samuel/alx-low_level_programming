#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: pointer to string
 * Return: pointer to the string to be converted.
 */

char *cap_string(char *str)
{
	int index;
	int next;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '"', '(', ')', '{', '}'};

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 97 + 65;
	}

	for (index = 0; str[index] != '\0'; index++)
	{
		for (next = 0; sep[next]; next++)
		{
			if (str[index - 1] == sep[next] && str[index] <= 122 && str[index] >= 97)
			{
				str[index] = str[index] - 97 + 65;
			}
		}
	}
	return (str);
}
