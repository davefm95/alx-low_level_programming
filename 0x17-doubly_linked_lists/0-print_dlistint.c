#include "lists.h"
/**
 *print_dlistint - prints the elements of a doubly linked list
 *@h: pointer to list head
 *Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
