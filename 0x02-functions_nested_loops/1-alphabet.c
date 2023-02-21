#include "main.h"


/**
 * print_alphabet -prints  alphabet to the console.
 * Return: void
 */

void print_alphabet(void)
{
char character[] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
_putchar(character[i]);
_putchar('\n');
}
