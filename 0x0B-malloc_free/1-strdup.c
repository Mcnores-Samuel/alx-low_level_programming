#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a new string .
 * @str: a string to be duplicated.
 *
 * Return: The string duplicated
 */

char *_strdup(char *str)
{
int m, n;
char *s;
if (str == NULL)
{
return (NULL);
}
n = 1;
while (str[n])
{
n++;
}
s = malloc((sizeof(char) * n) +1);

if (s == NULL)
{
return (NULL);
}
for (m = 0; m < n; m++)
{
s[m] = str[m];
}
s[m] = '\0';
return (s);
}
