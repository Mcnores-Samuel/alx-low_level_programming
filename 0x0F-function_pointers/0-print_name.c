#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the name to print.
 * @f: pointer to the function to print name.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
