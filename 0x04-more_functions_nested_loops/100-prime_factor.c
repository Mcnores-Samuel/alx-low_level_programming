#include <stdio.h>

/**
 * main - prints the largest prime factor
 * Return: 0 on success
*/


int main(void)
{

long int size = 612852475143;
int i;

for (i = 3; i <= size; i++)
{
if (size % i == 0)
{
size = size / i;
if (size == 1)
{
printf("%d\n", i);
}
}
}
return (0);
}
