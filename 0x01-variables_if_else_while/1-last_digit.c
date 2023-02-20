#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - assigns a random number and print its last digit;
 * Return: 0 on success or otherwise signaling failure.
 */
int main(void)
{
	int random, lastnum;

	srand(time(0));
	random = rand() - RAND_MAX / 2;
lastnum = random % 10;

if (lastnum > 5)
{
printf("Last digit of %d is %d and is greater then 5", random, lastnum);
}
else if (lastnum == 0)
{
printf("Last digit of %d is %d and is 0", random, lastnum);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", random, lastnum);
}
	return (0);
}
