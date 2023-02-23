#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * row = row, column = column, number = digits of current result
 * Return: times table
 * add  rowtra space past single digit
 */
void times_table(void)
{
	int row, column, number;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= 9; column++)
		{
			number =  row * column;
			if ((number / 10) > 0)
			{
				_putchar((number / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((number % 10) + '0');

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
