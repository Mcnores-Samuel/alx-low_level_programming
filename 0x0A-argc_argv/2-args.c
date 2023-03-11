#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of arguements inclding the file name.
 * @argv: pointer array of arguements inclding the file name.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
