#include "main.h"

/**
 * _memset - used to set a block of memory with a particular value.
 * @s: a pointer to the block of memory to be set.
 * @value: is the value to which each byte in the block will be set.
 * @num: is the number of bytes to be set.
 * Return: a pointer to the block pf memory set.
 */

char *_memset(char *s, char value, unsigned int num)
{
	unsigned int i = 0;

	while (i < num)
	{
		*(s + i) = value;
		i++;
	}
	return (s);
}
