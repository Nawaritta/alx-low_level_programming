#include "hash_tables.h"

/**
 * hash_table_set - adds and updates values of a hash table
 * @ht: pointer to the hash table.
 * @key: The key to add
 * @value: The value associated with key to add or updaate.
 *
 * Return: 0 if succeeded or otherwise - 1 if failed.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hn;
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[i] != NULL)
	{
		tmp = ht->array[i];
		while (tmp->next != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				if (tmp->value == NULL)
					return (0);
				return (1);
			}
			tmp = tmp->next;
		}
	}
	new_hn = malloc(sizeof(hash_node_t));
	if (new_hn == NULL)
		return (0);
	new_hn->key = strdup(key);
	if (new_hn->key == NULL)
	{
		free(new_hn);
		return (0);
	}
	new_hn->value = strdup(value);

	if (new_hn->value == NULL)
		return (0);
	new_hn->next = ht->array[i];
	ht->array[i] = new_hn;
	return (1);
}
