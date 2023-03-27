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
	int (*ptr)(int, int);
	int n1, n2, n3;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	ptr = get_op_func(argv[2]);
	n3 = ptr(n1, n2);
	printf("%d\n", n3);
	return (0);
}
