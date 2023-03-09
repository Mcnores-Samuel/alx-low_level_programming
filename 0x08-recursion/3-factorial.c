#include "main.h"

/**
 * factorial - returns the factorial of the given number.
 * @n: the number to perform factorial calculations on.
 * Return: The factorial of a given number.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
