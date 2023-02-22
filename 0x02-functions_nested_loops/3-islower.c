#include "main.h"

/**
 * _islower - checks whether a character is lowercase or not.
 * @c: character to be checked.
 * Return: 1 on success or 0 otherwise.
 */

int _islower(int c)
{
char data_c[] = "abcdefghijklmnopqrstuvwxyz";

int i;

for (i = 0; i < 26; i++)
{
if (c == data_c[i])
{
return (1);
}
else
{
return (0);
}
}
return (0);
}
