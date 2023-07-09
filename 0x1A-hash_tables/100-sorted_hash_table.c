#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table.
 * @size: size of the hash table array
 * Return: a pointer to the newly created hash table or NULL otherwise.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sorted_data_table;
	unsigned long int pos = 0;

	sorted_data_table = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (sorted_data_table == NULL)
		return (NULL);

	sorted_data_table->array = (shash_node_t **)malloc(sizeof(shash_node_t *)
			* size);

	if (sorted_data_table->array == NULL)
		return (NULL);

	sorted_data_table->size = size;
	sorted_data_table->shead = NULL;
	sorted_data_table->stail = NULL;

	while (pos < size)
		sorted_data_table->array[pos++] = NULL;

	return (sorted_data_table);
}

/**
 * sort_hash_table - sorts or arrange the hash table in a sorted way.
 * @ht: pointer to the hash table to sort.
 * @data: pointer to the current data node being created.
 * @key: pointer to the element's key.
 * Return: void
 */
void sort_hash_table(shash_table_t *ht, shash_node_t *data, const char *key)
{
	shash_node_t *sorted_list;

	if (ht->shead == NULL)
	{
		ht->shead = data;
		ht->shead->snext = NULL;
		ht->shead->sprev = NULL;
		ht->stail = data;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		data->sprev = NULL;
		data->snext = ht->shead;
		ht->shead->sprev = data;
		ht->shead = data;
	}
	else
	{
		sorted_list = ht->shead;
		while (sorted_list->snext != NULL && strcmp(sorted_list->snext->key,
					key) < 0)
			sorted_list = sorted_list->snext;
		data->sprev = sorted_list;
		data->snext = sorted_list->snext;
		if (sorted_list->snext == NULL)
			ht->stail = data;
		else
			sorted_list->snext->sprev = data;
		sorted_list->snext = data;
	}

}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: pointer to the hash table.
 * @key: pointer to the key(string) of an element.
 * @value: pointer to the value(string) of the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int pos, n = 0;
	shash_node_t *data = NULL, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	pos = key_index((unsigned char *)key, ht->size);
	current = ht->array[pos];

	while (n < ht->size)
	{
		if (current != NULL && strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value != NULL ? _strdup((char *)value) : NULL;
			return (1);
		}
		n++;
	}

	data = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (data == NULL)
		return (0);

	data->key = _strdup((char *)key);
	data->value = value != NULL ? _strdup((char *)value) : NULL;
	data->next = current;
	ht->array[pos] = data;

	sort_hash_table(ht, data, key);

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: sorted hash table to look for the value associated with the key.
 * @key: the key to search for in the hash table.
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int pos;
	shash_node_t *current;
	char *value;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	pos = key_index((unsigned char *)key, ht->size);

	current = ht->array[pos];

	while (current != NULL)
	{
		if (current != NULL && strcmp(current->key, key) == 0)
		{
			value = current->value;
			return (value);
		}
		current = current->next;
	}
	return (NULL);
}

/**
 * shash_table_print -  prints a sorted hash table.
 * @ht: pointer to the hash table to print.
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int n = 0;

	if (ht == NULL)
		return;
	current = ht->shead;

	printf("{");
	while (current != NULL)
	{
		if (n == 1)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		n = 1;
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table.
 * @ht: a hash table to delete
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int pos = 0;
	shash_node_t *current, *tmp;

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

/**
 * shash_table_print_rev -  prints a reversed sorted hash table.
 * @ht: pointer to the hash table to print.
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int n = 0;

	if (ht == NULL)
		return;
	current = ht->stail;

	printf("{");
	while (current != NULL)
	{
		if (n == 1)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		n = 1;
		current = current->sprev;
	}
	printf("}\n");
}
