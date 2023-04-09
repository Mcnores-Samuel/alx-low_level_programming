#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: number
 * @index: index
 * Return: 1 if it worked, or
 *-1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index >= 32)
		return (-1);

	bit = 1 << index;
	*n &= ~(bit);
	return (1);
}
