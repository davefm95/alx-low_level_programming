#include "hash_tables.h"
/**
 *hash_table_create - creates a hashtable
 *@size: size of the hashtable
 *Return: pointer to newly created hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
