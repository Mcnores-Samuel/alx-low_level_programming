#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * declare a pointer to the memory block to be allocated;
 * declare necessary helping variables
 * use strlen to determine length of the first string
 * the second string length will be determined by the n byte
 * add first string length + n byte value to get the full length of
 * the resulting string and use the added to allocate the memory
 * use the loop i iterating through the first string and when done move the curser to the end
 * then iterate the second string and assign iterated values to the heap memory
 * 
 * 
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size, len, i;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = strlen(s2);

	if (n >= len)
	{
		size = strlen(s1) + len;
	}
	else
	{
		size = strlen(s1) + n;
	}

	ptr = (char *)calloc(size, sizeof(char) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	while (j < n)
	{
		ptr[i + j] = *s2++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
