#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals
 *@a: string
 *@size: size of square
 *
 *Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int x, y, w, z;

	w = 0;
	z = 0;
	for (x = 0; x < size; x++)
		w += a[(size + 1) * x];
	for (y = 0; y < size; y++)
		z += a[(size - 1) * (y + 1)];
	printf("%d, %d\n", w, z);
}
