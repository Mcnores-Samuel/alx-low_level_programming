#include <stdio.h>

/**
 * main - print FizzBuzz.
 * Return: 0 on success.
 */

int main(void)
{
int size = 100;
int x;
for (x = 1; x <= size; x++)
{
if ((x % 3 == 0) && (x % 5 == 0))
{
printf("FizzBuzz");
printf(" ");
}
else if (x % 5 == 0)
{
printf("Buzz");
}
else if (x % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", x);
}

if (x != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
