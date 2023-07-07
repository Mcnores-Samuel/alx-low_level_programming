#include "hash_tables.h"

/**
 * _strdup - duplicates a string.
 * @str: string to duplicate.
 * Return: pointer to the duplicate string.
*/
char *_strdup(char *str)
{
	char *dest;
	int len = 0, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	dest = (char *)malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to the hash table.
 * @key: pointer to the key(string) of an element.
 * @value: pointer to the value(string) of the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int pos;
	hash_node_t *data = NULL, *tmp;

	if (key == NULL)
		return (0);

	data = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (data == NULL)
		return (0);

	pos = key_index((unsigned char *)key, ht->size);
	data->key = _strdup((char *)key);
	data->value = _strdup((char *)value);

	if (ht->array[pos] == NULL)
	{
		data->next = NULL;
		ht->array[pos] = data;
	}
	else
	{
		tmp = ht->array[pos];
		data->next = tmp;
		ht->array[pos] = data;
	}
	return (1);
}
