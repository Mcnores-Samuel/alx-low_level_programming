#include "hash_tables.h"

/**
 * hash_djb2 - hashes a key and returns a unique number to be used for
 * positioning a key value pair in the hash table array.
 * @str: key or str to hash
 * Return: a unique integer known as a hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int chr;

	hash = 5381;
	while ((chr = *str++))
		hash = ((hash << 5) + hash) + chr;
	return (hash);
}
