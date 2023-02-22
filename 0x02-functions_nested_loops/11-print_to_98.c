#include "main.h"

/**
 * print_to_98 - print all natural number from n to 98.
 * @n: a number to iterate through.
 * Return: void
*/

void print_to_98(int n)
{
int count_limit = 98;
if (n < count_limit)
{
for (; n <= count_limit; n++)
{
printf("%d, ", n);
if (n == count_limit)
{
printf("\n");
}
}
}
else if (n > count_limit)
{
for (; n >= count_limit; n--)
{
printf("%d, ", n);
if (n == count_limit)
{
printf("%d\n", n);
}
}
}
}
