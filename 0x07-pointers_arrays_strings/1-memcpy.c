#include "main.h"

/**
 * _memcpy - copies a block of memory from one location to another.
 * @dest: a pointer to the memory location where the copied data
 *        will be stored.
 * @src: a pointer to the memory location from which the data
 *       will be copied.
 * @n: the number of bytes to be copied.
 * Return: pointer to the destination memory location.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n-- > 0)
	{
		*dest++ = *src++;
	}
	return (dest);
}
