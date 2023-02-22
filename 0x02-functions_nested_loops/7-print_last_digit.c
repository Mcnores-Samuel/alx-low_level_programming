#include "main.h"

/**
 * _abs - returns the absolute number.
 * @num: the number to be checked for formatting.
 * Return:absolute number.
 */
int _abs(int num)
{
if (num < 0)
{
return (-num);
}
else
{
return (num);
}
}

/**
 * print_last_digit - returns the absolute last digit of a number.
 * @num: the number to be checked for formatting.
 * Return: the last digit of a number.
 */
int print_last_digit(int num)
{
int last = num % 10;
_putchar(last + '0');
return (_abs(last));
}
