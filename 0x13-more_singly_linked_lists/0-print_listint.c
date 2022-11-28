#include <stdio.h>
#include "lists.h"
/**
 *print_listint - prinys all the contents of a list
 *@h: pointer to list
 *Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
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
