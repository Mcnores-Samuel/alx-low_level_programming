#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps value of two integers
 * @a: integers to swaps.
 * @b: second integers to swap with.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
