#include "main.h"

/**
 * print_chessboard - prints a the chessboard using 2D array.
 * @a: pointer to a 2D array to print from.
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
