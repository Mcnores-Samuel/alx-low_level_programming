#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all integer parameters passed.
 * @n: number of parameters to expect.
 * Return: returns the sum of all the parameters passed.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_ptr;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(arg_ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_ptr, int);
	}

	va_end(arg_ptr);

	return (sum);

}
