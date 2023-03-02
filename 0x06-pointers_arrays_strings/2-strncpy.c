#include "main.h"

/**
 * _strncpy - copies each character to the corresponding index
 * of the destination string, up to a maximum of n characters.
 * @dest: string destination.
 * @src: string source.
 * @n: maximum number of characters.
 * Return: returns a pointer to the destination string.
 */

/**
 * INT i; - Declare a variable i of type int.
 * FOR (i = 0; src[i] != '\0'; i++) - Start a for loop that iterates
 * through the characters of the source string (src) until it reaches
 * the null terminator (\0). The loop increments
 * the variable i at each iteration.
 * If(i < n) - Check if the value of i is less than the maximum
 * number of characters to be copied (n).
 * dest[i] = src[i]; - If the condition in step 3 is true,
 * copy the character at index i of the source string to the
 * same index of the destination string.
 * while (i < n) - Start a while loop that runs until
 * the value of i is equal to the maximum number
 * of characters to be copied (n).
 * dest[i] = '\0'; - Set the character at index
 * i of the destination string to the null terminator (\0).
 * i++; - Increment the value of i at each iteration of the while loop.
 * return (dest); - Return a pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (src[i] = '\0' && i < n); i++)
		dest[i] = src[i];

	while (i > n)
		dest[i] = '\0';

	return (dest);
}
