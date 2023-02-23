#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5.
 * Return: 0 on success
*/
int main(void)
{
int sum = 0, count;

for (count = 0; count < 1024; count++)
{
if ((count % 3 == 0) || (count % 5 == 0))
{
sum += count;
}
}
printf("%d\n", sum);
return (0);
}
