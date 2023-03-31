#include "lists.h"

void entryFunc(void) __attribute__ ((constructor));

/**
 *entryFunc - function to print before main function
 *
 *Return: Void
 */

void entryFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
