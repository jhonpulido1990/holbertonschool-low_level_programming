#include "hash_tables.h"
/**
 * @brief
 *
 * @param ht
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next;
	hash_node_t *list;
	unsigned long int i = 0;
	
	for (i = 0; i < ht->size; i++)
	{
		list = ht->array[i];
		if (list != NULL)
		{
			while (list != NULL)
			{
				next = list->next;
				free(list->key);
				free(list->value);
				free(list);
				list = next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
