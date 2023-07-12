#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
int insert_into_sorted_list(shash_table_t *ht, shash_node_t *new_hn);

/**
 * shash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: the created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned int i;

	if (size > 0)
	{
		ht = malloc(sizeof(shash_table_t));
		if (!ht)
			return (NULL);
		ht->size = size;
		ht->array = malloc(sizeof(shash_node_t *) * size);
		ht->shead = NULL;
		ht->stail = NULL;
		if (!ht->array)
		{
			free(ht);
			return (NULL);
		}
		for (i = 0; i < size; i++)
			ht->array[i] = NULL;
		return (ht);
	}
	return (NULL);
}

/**
 * shash_table_set - adds and updates values of a hash table
 * @ht: pointer to the hash table
 * @key: key to add
 * @value: value to add
 * Return: 0 if succeeded or -1 if failed
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *tmp, *new_hn;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp->value != NULL);
		}
		tmp = tmp->next;
	}
	new_hn = malloc(sizeof(shash_node_t));
	if (!new_hn)
		return (0);
	new_hn->key = strdup(key);
	if (new_hn->key == NULL)
	{
		free(new_hn);
		return (0);
	}
	new_hn->value = strdup((char *)value);
	if (new_hn->value == NULL)
	{
		free(new_hn->key);
		free(new_hn);
		return (0);
	}
	new_hn->next = ht->array[index];
	ht->array[index] = new_hn;
	new_hn->snext = NULL;
	new_hn->sprev = NULL;
	return (insert_into_sorted_list(ht, new_hn));
}

/**
 * shash_table_get - Retrieves the value associated with a key.
 * @ht: pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: The value associated with the key or NULL if no match found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head;

	if (ht == NULL)
		return;

	head = ht->shead;
	printf("{");
	while (head)
	{
		printf("'%s': '%s'", head->key, head->value);
		if (head != ht->stail)
			printf(", ");
		head = head->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints table reversed
 * @ht: hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail;

	if (ht == NULL)
		return;
	tail = ht->stail;
	printf("{");
	while (tail)
	{
		printf("'%s': '%s'", tail->key, tail->value);
		if (tail != ht->shead)
			printf(", ");
		tail = tail->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned int i;
	shash_node_t *current, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			tmp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = tmp;
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * insert_into_sorted_list - adds an element into a sorted list
 * @ht: hash table
 * @new_hn: the node to insert
 * Return: 0 or 1
 */
int insert_into_sorted_list(shash_table_t *ht, shash_node_t *new_hn)
{
	shash_node_t *tmp;

	if (ht->shead == NULL)
	{
		ht->shead = new_hn;
		ht->stail = new_hn;
		return (1);
	}
	if (strcmp(new_hn->key, ht->shead->key) < 0)
	{
		ht->shead->sprev = new_hn;
		new_hn->snext = ht->shead;
		ht->shead = new_hn;
		return (1);
	}
	else
	{
		tmp = ht->shead->snext;
		while (tmp && strcmp(new_hn->key, tmp->key) > 0)
			tmp = tmp->snext;
		if (!tmp)
		{
			new_hn->sprev = ht->stail;
			ht->stail->snext = new_hn;
			ht->stail = new_hn;
			return (1);
		}
		new_hn->sprev = tmp->sprev;
		tmp->sprev->snext = new_hn;
		tmp->sprev = new_hn;
		new_hn->snext = tmp;
	}
	return (1);
}
