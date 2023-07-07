#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table to look for the value associated with the key.
 * @key: the key to search for in the hash table.
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int pos;
	hash_node_t *current;
	char *value;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	pos = key_index((unsigned char *)key, ht->size);

	current = ht->array[pos];

	if (current != NULL && strcmp(current->key, key) == 0)
		value = current->value;
	else
		value = NULL;
	return (value);
}
