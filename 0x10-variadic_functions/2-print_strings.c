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

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (*str == '\0')
			printf("(nil)");

		printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");

}
