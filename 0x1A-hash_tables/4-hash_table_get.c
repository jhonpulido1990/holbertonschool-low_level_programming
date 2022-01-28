#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table
 * @key: key to find
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = 0;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
