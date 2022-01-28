#include "hash_tables.h"
/**
 * hash_table_create - craete a hash table
 *
 * @size: size of array
 * Return: array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array = NULL;

	array = malloc(sizeof(hash_table_t) * size);
	if (array == NULL)
		return (NULL);
	return (array);
}
