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
	unsigned int i = 0;
	char *s;

	va_list argc;

	if (n > 0)
	{
		va_start(argc, n);

		while (i < n)
		{
			s = va_arg(argc, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(argc);
	}
	printf("\n");
}
