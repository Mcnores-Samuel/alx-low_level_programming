#include <stdio.h>

/**
  * main - Prints the first 50 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int count = 0;
	long initial = 1, next_fib = 2;

	while (count < 50)
	{
		if (count == 0)
			printf("%ld", initial);
		else if (count == 1)
			printf(", %ld", next_fib);
		else
		{
			next_fib += initial;
			initial = next_fib - initial;
			printf(", %ld", next_fib);
		}

		++count;
	}

	printf("\n");
	return (0);
}
