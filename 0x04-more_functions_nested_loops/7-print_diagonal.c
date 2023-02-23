#include "main.h"

/**
 * print_diagonal - prints a diagonal line to the console.
 * @n: number to determine how long the line will be.
 * Return: void
 */

void print_diagonal(int n)
{
int num;
int num1;
if (n > 0)
{
for (num = 1; num <= n; num++)
{
for (num1 = 1; num1 <= num; num1++)
{
if (num != num1)
{
_putchar(' ');
}
if (num == num1)
{
_putchar(92);
_putchar('\n');
}
}
}
}
else
{
_putchar('\n');
}
}
