#include "hash_tables.h"
/**
 *key_index - generates index of key in hash table
 *@key: key string
 *@size: size of table
 *Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h_key, index;

	if (size == 0)
		return (0);
	h_key = (unsigned long int)hash_djb2(key);
	index = h_key % size;
	return (index);
}
