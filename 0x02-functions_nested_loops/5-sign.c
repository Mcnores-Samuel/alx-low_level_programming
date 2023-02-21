#include "main.h"

/*
 * print_sign - prints a sign and return value
 * @n: the number to test.
 * Return: 1 on postive int, 0 on 0 and -1 on negative int.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
