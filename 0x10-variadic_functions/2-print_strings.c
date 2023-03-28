#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings separated by separator.
 * @separator: string separator.
 * @n: number of arguments passed.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				printf("(nil)");
			printf("%s", str);

			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");

}
