#include "main.h"

/**
 * print_square - print a square using # character.
 * @size: the size of the square.
 * Return:void
 */

void print_square(int size)
{
int x;
int y;
if (size > 0)
{
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
