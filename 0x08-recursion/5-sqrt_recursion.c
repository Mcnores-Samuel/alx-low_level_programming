#include "main.h"

/**
 * sqrt_recursion_helper - that takes three integer arguments: n, the number
 *                         whose square root we want to find; x, the lowest
 *                         possible value for the square root; and y,
 *                         the highest possible value for the square root.
 *                         The helper function uses a binary search algorithm
 *                         to find the natural square root of n by dividing
 *                         the search range in half at each step and comparing
 *                         the square of the midpoint to n.
 * @n: the number whose square root we want to find.
 * @x: the lowest possible value for the square root.
 * @y: the highest possible value for the square root.
 * Return:  If the square is equal to n, the function returns the midpoint.
 *         If the square is less than n, the function searches the upper half
 *         of the range. If the square is greater than n, the function searches
 *         the lower half of the range. If the search range becomes empty,
 *         the function returns -1 to indicate that n does not have
 *         a natural square root.
 */

int sqrt_recursion_helper(int n, int x, int y)
{
	int mid = (x + y) / 2;
	int mid_square = (mid * mid);

	if (x > y)
	{
		return (-1);
	}

	if (mid_square < n)
	{
		return (sqrt_recursion_helper(n, mid + 1, y));
	}
	else if (mid_square == n)
	{
		return (mid);
	}
	else
	{
		return (sqrt_recursion_helper(n, x, mid - 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number whose square root we want to find.
 * Return: If n does not have a natural square root,
 *         the function should return -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_recursion_helper(n, 1, n / 2));
	}
}
