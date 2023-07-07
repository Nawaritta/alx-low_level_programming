#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: pointer to the hash table to print.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i, key_exist = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if(key_exist <= 1)
				key_exist++;
			if (key_exist > 1)
				printf(", ");

			tmp = ht->array[i];
			printf("'%s': '%s'", tmp->key, tmp->value);

			while (tmp->next != NULL)
			{
				tmp = tmp->next;
				printf("'%s': '%s'", tmp->key, tmp->value);

				if (tmp->next != NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
