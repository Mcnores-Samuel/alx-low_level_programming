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
	unsigned int size, i, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = strlen(s1);
	len = strlen(s2);

	if (n >= len)
	{
		size = size + len;
	}
	else
	{
		size = size + n;
	}

	ptr = (char *)calloc(size, sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		if (i <= strlen(s1))
		{
			ptr[i] = s1[i];
		}

		if (i >= strlen(s1))
		{
			ptr[i] = *s2++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
