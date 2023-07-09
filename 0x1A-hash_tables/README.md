Project: 0x1A-hash_tables
## 0-hash_table_create.c

```
  hash_table_create - creates a hash table.
  @size: size of the hash table array
  Return: a pointer to the newly created hash table or NULL otherwise.
 
```
## 100-sorted_hash_table.c

```
  shash_table_create - creates a sorted hash table.
  @size: size of the hash table array
  Return: a pointer to the newly created hash table or NULL otherwise.
 
```
```
  sort_hash_table - sorts or arrange the hash table in a sorted way.
  @ht: pointer to the hash table to sort.
  @data: pointer to the current data node being created.
  @key: pointer to the element's key.
  Return: void
 
```
```
  shash_table_set - adds an element to the hash table.
  @ht: pointer to the hash table.
  @key: pointer to the key(string) of an element.
  @value: pointer to the value(string) of the key.
  Return: 1 if it succeeded, 0 otherwise
 
```
```
  shash_table_get - retrieves a value associated with a key.
  @ht: sorted hash table to look for the value associated with the key.
  @key: the key to search for in the hash table.
  Return: the value associated with the element, or
  NULL if key couldn’t be found
 
```
```
  shash_table_print -  prints a sorted hash table.
  @ht: pointer to the hash table to print.
  Return: void
 
```
```
  shash_table_delete - deletes a sorted hash table.
  @ht: a hash table to delete
  Return: void
 
```
```
  shash_table_print_rev -  prints a reversed sorted hash table.
  @ht: pointer to the hash table to print.
  Return: void
 
```
## 1-djb2.c

```
  hash_djb2 - hashes a key and returns a unique number to be used for
  positioning a key value pair in the hash table array.
  @str: key or str to hash
  Return: a unique integer known as a hash value.
 
```
## 2-key_index.c

```
  key_index - calculates an index of the key.
  @key: pointer to the key to get index for.
  @size: the size of the array at which to find a
  position for the key in the hash table.
  Return: the index at which the key/value pair should
  be stored in the array of the hash table
 
```
```
  _strdup - duplicates a string.
  @str: string to duplicate.
  Return: pointer to the duplicate string.

```
## 3-hash_table_set.c

```
  _strdup - duplicates a string.
  @str: string to duplicate.
  Return: pointer to the duplicate string.

```
```
  hash_table_set - adds an element to the hash table.
  @ht: pointer to the hash table.
  @key: pointer to the key(string) of an element.
  @value: pointer to the value(string) of the key.
  Return: 1 if it succeeded, 0 otherwise
 
```
## 4-hash_table_get.c

```
  hash_table_get - retrieves a value associated with a key.
  @ht: hash table to look for the value associated with the key.
  @key: the key to search for in the hash table.
  Return: the value associated with the element, or
  NULL if key couldn’t be found
 
```
## 5-hash_table_print.c

```
  hash_table_print -  prints a hash table.
  @ht: pointer to the hash table to print.
  Return: void
 
```
## 6-hash_table_delete.c

```
  hash_table_delete - deletes a hash table.
  @ht: a hash table to delete
  Return: void
 
```
