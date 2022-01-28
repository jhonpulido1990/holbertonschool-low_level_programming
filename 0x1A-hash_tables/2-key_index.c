#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 *
 * @key: string
 * @size: size node
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;

	return (index);
}
