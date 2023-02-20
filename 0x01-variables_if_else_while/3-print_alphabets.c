#include <stdio.h>

/**
 * main - print lowercase and upprcase alphabet.
 * Return: 0 on success or otherwise signaling failure.
 */

int main(void)
{
int i = 0;
char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

while (i <= 52)
{
putchar(alphabet[i]);
}
putchar('\n');
i++;
return (0);
}
