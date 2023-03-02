#include "main.h"
#include <string.h>

/**
 * 
 */

char *_strcat(char *dest, char *src)
{
	char *endofstr = dest + strlen(dest);

	while (*src != '\0')
	{
		*endofstr++ = *src++;
	}
	endofstr = '\0';

	return dest;
}
