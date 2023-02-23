#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14.
 * Return: void
 */

void more_numbers(void)
{
int count;
int num;
for (count = 1; count <= 10; count++)
{
for (num = 0; num <= 14; num++)
{
if (num >= 10)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
