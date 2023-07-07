#include "hash_tables.h"

/**
 * key_index - calculates an index of the key.
 * @key: pointer to the key to get index for.
 * @size: the size of the array at which to find a
 * position for the key in the hash table.
 * Return: the index at which the key/value pair should
 * be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int position;

	if (key == NULL)
		exit(EXIT_FAILURE);

	position = hash_djb2(key) % size;

	return (position);
}
