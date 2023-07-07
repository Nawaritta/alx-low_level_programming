#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hn;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	if (ht->array[i] != NULL && strcmp(ht->array[i]->key, key) == 0)
	{
		ht->array[i]->value = strdup(value);
	       	return (1);
	}


	new_hn = malloc(sizeof(hash_node_t));
	if (new_hn == NULL)
		return (0);

	new_hn->key = strdup(key);
	new_hn->value = strdup(value);
	new_hn->next = ht->array[i];

	ht->array[i] = new_hn;

	return (1);
}
