#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table
 *@ht: hash table
 *@key: key string
 *@value: value attached to key
 *Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	hash_node_t *item;

	if (!ht || !key || strcmp(key, "") == 0)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;
	ind = key_index((const unsigned char *)key, ht->size);
	if (ht->array[ind] == NULL)
	{
		ht->array[ind] = item;
	}
	else
	{
		if (strcmp(key, ht->array[ind]->key) == 0)
		{
			ht->array[ind]->value = (char *)value;
		}
		else
		{
			item->next = ht->array[ind];
			ht->array[ind] = item;
		}
	}
	return (1);
}
