#include "main.h"

/**
 * _isalpha - checks a character whether is alphebet or not
 * @c: the character to be checked.
 * Return: 1 on success or 0 otherwise.
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
