#include "lists.h"
/**
 *listint_len - gets the number of nodes in list
 *@h: pointer  to first node in list
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
