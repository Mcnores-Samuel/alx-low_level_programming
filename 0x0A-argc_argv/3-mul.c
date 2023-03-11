#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: arguements counter
 * @argv: pointer to arguments array.
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, x, y = 0, result = 1;
	int *arr = (int *)malloc((argc - 1) * sizeof(int));

	if (arr == NULL)
	{
		exit(1);
	}

	for (i = 1; i < argc; i++)
	{
		arr[y] = atoi(argv[i]);
		y++;
	}

	for (x = 0; x < (argc - 1); x++)
	{
		result *= arr[x];
	}

	if (argc == 1 || argc != 3)
	{
		printf("Error\n");
		free(arr);
		return (1);
	}
	else
	{
		printf("%d\n", result);
		free(arr);
	}
	return (0);
}

