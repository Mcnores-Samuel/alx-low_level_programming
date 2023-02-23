#include "main.h"

/**
 * print_line - print a straight line to the console.
 * @n: number to determine how long the number will be.
 * Return: void.
 */

void print_line(int n)
{
int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
