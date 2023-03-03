#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: pointer to string.
 * Return: pointer to encoded string.
 */

char *rot13(char *string)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char scrumbled[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x = 0;
	int y = 0;

	while (string[x] != '\0')
	{
		for (y = 0; alpha[y] != '\0' && string[x] != alpha[y]; y++)
			;
		if (y < 52)
		{
			string[x] = scrumbled[y];
		}
		x++;
	}
	return (string);
}
