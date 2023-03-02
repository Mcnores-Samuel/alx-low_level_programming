#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to array to reverse.
 * @n: number of elemets of the array.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int left_int = 0;
	int right_int = n - 1, tmp_int;

	while (left_int < right_int)
	{
		tmp_int = a[left_int];
		a[left_int] = a[right_int];
		a[right_int] = tmp_int;
		left_int++;
		right_int--;
	}
}
