#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two string of any size.
 * @s1: string
 * @s2: another string
 *
 * Return: String concatenated
 */

char *str_concat(char *s1, char *s2)
{
int m, n, p = 0;
char *s;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

for (m = 0; m < s1[m]; m++)
;
for (n = 0; n < s2[n]; n++)
;
s = malloc((sizeof(char) * m) + (sizeof(char) * n) + 1);

if (s == NULL)
{
return (NULL);
}

while (*s1 != '\0')
{
s[p] = *s1;
s1++;
p++;
}


while (*s2 != '\0')
{
s[p] = *s2;
s2++;
p++;
}
s[p] = '\0';
return (s);
}
