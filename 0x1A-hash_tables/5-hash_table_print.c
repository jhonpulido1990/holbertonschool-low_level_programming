#include "hash_tables.h"
/**
 * hash_table_print - print
 *
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0;
	int count = 0;

	if (ht == NULL)
		printf(" ");
	printf("{");
	for (i = 0; i <= ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			while (tmp != NULL)
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				count++;
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
