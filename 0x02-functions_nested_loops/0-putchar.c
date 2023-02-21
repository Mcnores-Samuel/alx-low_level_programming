#include "main.h"

/**
 * main -print the string "_putchar" to the standard output.
 * Return: 0 on success or -1 signaling failure.
 */

int main(void)
{
char str[] = "_putchar";
int i;

for (i = 0; i < 9; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
