#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table.
 * @ht: pointer to the hash table to print.
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pos = 0, n = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	while (pos < ht->size)
	{
		if (ht->array[pos] == NULL)
		{
			pos++;
			continue;
		}

		current = ht->array[pos];
		if (n == 1)
			printf(", ");
		if (current->next != NULL)
		{
			while (current != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				if (current != NULL)
					printf(", ");
			}
		}
		else
		{
			printf("'%s': '%s'", current->key, current->value);
			n = 1;
		}
		pos++;
	}
	printf("}\n");
}
