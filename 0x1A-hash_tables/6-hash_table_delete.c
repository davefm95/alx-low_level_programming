#include "hash_tables.h"
/**
 *hash_table_delete - deletes a hash table
 *@ht: hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *it;
	hash_node_t *hold;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			it = ht->array[i];
			while (it)
			{
				if (it->key)
					free(it->key);
				if (it->value)
					free(it->value);
				hold = it;
				it = it->next;
				free(hold);
			}
		}
	}
	free(ht->array);
	free(ht);
}
