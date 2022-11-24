#include "lists.h"
#include <stdio.h>
/**
 *print_list - pronts all tue elements in a list struct
 *@h: pointer to list element
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
