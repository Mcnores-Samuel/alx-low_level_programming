#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: integer to determine the size of the triangle.
 * Return: void.
 */

void print_triangle(int size)
{
int x, y, z;
if (size > 0)
{
for (x = 0; x < size; x++)
{
for (y = size - x; y > 1; y--)
{
_putchar(' ');
}
for (z = 0; z <= x; z++)
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
