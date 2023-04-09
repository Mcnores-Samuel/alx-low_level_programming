#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return:  the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bit = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			i++;
		else
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		bit = bit << 1;

		if (b[i] == '1')
		{
			bit += 1;
		}
	}
	return (bit);
}
