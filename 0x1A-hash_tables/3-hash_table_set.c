#include "hash_tables.h"
/**
 * @brief 
 * 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node = NULL;
    hash_node_t *tmp;

    int i = 0;

    if (key == NULL || ht == NULL || value == NULL || *key == '\0')
        return (0);
    i = key_index((unsigned char *)key, ht->size);
    tmp = ht->array[i];
    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            tmp->value = strdup(value);
            return (1);
        }
        tmp = tmp->next;
    }
    new_node = malloc(sizeof(hash_node_t *));
    if (new_node == NULL)
        return (0);
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[i];
    ht->array[i] = new_node;
    return (1);
}
