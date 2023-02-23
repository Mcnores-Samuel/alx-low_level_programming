#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: 0 on success!
  */
int main(void)
{
	int fib_count = 0;
	long initial_fib = 1, next_fib = 2, sum = next_fib;

	while (next_fib + initial_fib < 4000000)
	{
		next_fib += initial_fib;

		if (next_fib % 2 == 0)
			sum += next_fib;

		initial_fib = next_fib - initial_fib;

		++fib_count;
	}

	printf("%ld\n", sum);
	return (0);
}
