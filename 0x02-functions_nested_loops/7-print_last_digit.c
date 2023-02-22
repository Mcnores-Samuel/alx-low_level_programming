#include "main.h"

/**
 * print_last_digit - prints the absolute last digit of a number.
 * @num: the number to be checked for formatting.
 * Return: the last digit of a number.
 */

int print_last_digit(int num)
{
int last = num % 10;
return _abs(last);
}
