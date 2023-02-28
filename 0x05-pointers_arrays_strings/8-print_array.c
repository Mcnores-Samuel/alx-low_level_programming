#include "main.h"
#include <stdio.h>

/**
 * print_array - print all elements of an array.
 * @a: an array to print.
 * @n: size of an array.
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
