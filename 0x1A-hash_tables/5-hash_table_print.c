#include "hash_tables.h"
/**
 *hash_table_print- prints a hash table
 *@ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *item;
	unsigned long int i, count = 0, c = 0;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			count++;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			c++;
			item = ht->array[i];
			while (item)
			{
				if (c != 1)
					printf(" ");
				printf("'%s': '%s'", item->key, item->value);
				if (c != count || (c == count && item->next))
					printf(",");
				item = item->next;
			}
		}
	}
	printf("}\n");
}
