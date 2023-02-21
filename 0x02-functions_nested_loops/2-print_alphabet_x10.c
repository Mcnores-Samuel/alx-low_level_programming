#include "main.h"

/**
 * print_alphabet_x10 - print the alphebet 10 time to the console.
 * Return: void
 */

void print_alphabet_x10(void)
{
char character[] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 1; i <= 10; i++)
{
int x;
for (x = 0; x < 27; x++)
{
_putchar(character[x]);
}
_putchar('\n');
}
}
