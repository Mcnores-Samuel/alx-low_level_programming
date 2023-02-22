#include "main.h"

/**
 * _isalpha - checks a character whether is alphebet or not
 * @c: the character to be checked.
 * Return: 1 on success or 0 otherwise.
 */

int _isalpha(int c)
{
int i;
char data_c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

for (i = 0; i < 52; i++)
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
