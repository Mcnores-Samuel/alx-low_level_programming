#include "main.h"

/**
 * times_table - print to the console a table of multiples of 9
 * Return:void, no return value
*/

void times_table(void)
{
int column, row, number;
for (column = 0; column < 9; column++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (row = 1; row < 9; row++)
{
number = (column * row);
if ((number / 10) > 0)
{
_putchar((number / 10) + 48);
}
else
{
_putchar(' ');
}
_putchar((number % 10) + 48);

if (row < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
}
