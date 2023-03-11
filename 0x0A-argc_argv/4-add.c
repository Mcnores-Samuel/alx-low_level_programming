#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/**
 * main - adds numbers.
 * @argc: arguements counter
 * @argv: pointer to arguments array.
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, y, result = 0;
	int *arr = (int *)malloc((argc - 1) * sizeof(int));

	if (arr == NULL)
	{
		exit(1);
	}

	for (i = 0; i < argc - 1; i++)
	{
		if (*argv[i + 1] >= 40 && *argv[i + 1] <= 57)
		{
			arr[i] = atoi(argv[i + 1]);
		}
		else
		{
			printf("Error\n");
			free(arr);
			return (1);
		}
	}

	for (y = 0; y < argc - 1; y++)
	{
		result += arr[y];
	}

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	else
	{
		printf("%d\n", result);
	}
	free(arr);
	return (0);

}
