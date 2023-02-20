#include <stdio.h>

/**
 * main - prints the alphabet to the console.
 * Return: 0 signaling successful execution.
 */

int main(void)
{
int alph_asciicode;

for (alph_asciicode = 97; alph_asciicode <= 122; alph_asciicode++)
{
putchar(alph_asciicode);
}
putchar('\n');
return (0);
}
