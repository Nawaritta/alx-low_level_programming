#include "hash_tables.h"
/**
 * free_hash_node_t - frees a node in the hash table
 *@current: the node to free
 */
void free_hash_node_t(hash_node_t *current)
{
	hash_node_t *tmp;

	while (current != NULL)
	{
		tmp = current->next;
		free(current->key);
		free(current->value);
		free(current);
		current = tmp;
	}
}
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
		free_hash_node_t(ht->array[i]);
	free(ht->array);
	free(ht);
}
