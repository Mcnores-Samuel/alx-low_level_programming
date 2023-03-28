#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers separated by the separator.
 * @separator: the separator to separate the numbers
 * @n: the number of integers passed to the function.
 * Description: the function takes as many parameters as desired
 * and will be printed to the console separated by the separator.
 * Return: void / nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_ptr;

	va_start(arg_ptr, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int next = va_arg(arg_ptr, int);

			if (separator)
			{
				printf("%d", next);

				if (i != n - 1)
				{
					printf("%s", separator);
				}
			}
			else
				printf("%d", next);
		}
		printf("\n");
	}
}
