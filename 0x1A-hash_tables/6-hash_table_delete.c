#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: a hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int pos = 0;
	hash_node_t *current, *tmp;

	if (ht == NULL)
		return;

	while (pos < ht->size)
	{
		current = ht->array[pos];

		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		pos++;
	}
	free(ht->array);
	free(ht);
}
