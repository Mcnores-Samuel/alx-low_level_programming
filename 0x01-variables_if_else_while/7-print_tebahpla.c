#include <stdio.h>

/**
 * main - Prints the reversed alphabet
 * Return: 0 on success or otherwise signaling failure.
 */

int main(void)
{
int alph;

for (alph = 122; alph >= 97; alph--)
{
putchar(alph);
}
putchar('\n');
return (0);
}
