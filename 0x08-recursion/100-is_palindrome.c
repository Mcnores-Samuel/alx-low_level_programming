#include "main.h"
#include <string.h>

/**
 * check_palindrome - checks whether a given string is a palindrome or not.
 * @str_len: length of the string.
 * @offset: the current position being compared.
 * @str: pointer to the string being checked.
 * Return: 1 if the string is palindrome otherwise 0.
 */

int check_palindrome(int str_len, int offset, char *str)
{
	if (offset > str_len / 2)
	{
		return (1);
	}
	else if (str[offset] != str[str_len - offset - 1])
	{
		return (0);
	}
	else
	{
		return (check_palindrome(str_len, offset + 1, str));
	}
}

/**
 * is_palindrome -  checks whether a given string is a palindrome or not.
 * @str: pointer to the string being checked.
 * Return: 1 if the string is palindrome otherwise 0.
 */

int is_palindrome(char *str)
{
	int len, palindrome;

	len = strlen(str);
	palindrome = check_palindrome(len, 0, str);

	return (palindrome);
}
