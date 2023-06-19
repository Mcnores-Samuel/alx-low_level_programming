#include "main.h"

/**
 * _putchar - prints a character to file output.
 * @c: a character to print.
 * Returns: number of bytes printed.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
