#include <stdio.h>

/**
 * main - prints base 10 numbers by decoding ascii codes.
 * Return: 0 on success or otherwise signaling failure.
 */

int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar(num + 48);
}
putchar('\n');
return (0);
}
