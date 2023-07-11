#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(30);
	hash_table_set(ht, "Canada", "Ottawa");


	hash_table_print(ht);
	return (EXIT_SUCCESS);
}
