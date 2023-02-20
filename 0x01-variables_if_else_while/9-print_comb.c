#include <stdio.h.>

/**
 * main - prints comma seperated single numbers.
 * Return: 0 signaling successful execution.
 */

int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar(num + 48);

if ((num + 48) != 57)
{
putchar(44);
putchar(' ');
}
}
putchar('\n');
return (0);
}
