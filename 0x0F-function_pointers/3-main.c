#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - takes commandline arguments and pass the to
 * a pointer function and print the result.
 * @argc: argument count.
 * @argv: array of arguments
 * Return: 0 on success or 98 otherwise.
 */

int main(int argc, char *argv[])
{
	int (*fun_ptr)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	fun_ptr = get_op_func(argv[2]);
	printf("%d\n", fun_ptr(num1, num2));
	exit(EXIT_SUCCESS);
}
