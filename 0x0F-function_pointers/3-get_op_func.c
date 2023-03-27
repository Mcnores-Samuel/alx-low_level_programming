#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - gets or calls a function.
 * @s: a character to match for a function call.
 * Return: the function for further operations.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		(*s == *(ops[i]).op && *s != '\0') ? (ops[i].f) : NULL;
		i++;
	}
	printf("Error\n");
	exit(99);
}
