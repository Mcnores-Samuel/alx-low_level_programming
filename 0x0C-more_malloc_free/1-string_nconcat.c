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
	int len = strlen(s1) + n, i;
	unsigned int j = 0;

	ptr = (char *)calloc(len, sizeof(char));

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
	return (ptr);
}
