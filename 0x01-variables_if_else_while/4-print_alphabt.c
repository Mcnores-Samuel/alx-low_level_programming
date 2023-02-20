#include <stdio.h>

/**
 * main - print the alphabet to the console except e and q.
 * Return: 0 on success or otherwise signaling failure.
 */

int main(void)
{
int i;

for (i = 97; i <= 122; i++)
{
if (i == 101 || i == 113)
continue;
putchar(i);
}
putchar('\n');
return (0);
}
