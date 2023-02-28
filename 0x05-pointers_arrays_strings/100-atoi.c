#include "main.h"

/**
 * _atoi - return an integer found in the string.
 * @s: string to search.
 * Return: converted integer from string.
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}

		if (s[i] == '-' || s[i] == '+')
		{
			i++;
			continue;
		}

		if (s[i] >= 48 && s[i] <= 57)
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
