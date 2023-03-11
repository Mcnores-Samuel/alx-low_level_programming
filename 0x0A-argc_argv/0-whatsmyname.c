#include <stdio.h>

/**
 * main -  prints its name, followed by a new line.
 * @argc: argument count.
 * @argv: pointer to the array passed including the name of
 *        the program path file and itself.
 * Return: 0 signaling success or otherwise failure.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
