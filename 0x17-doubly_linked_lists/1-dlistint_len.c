#include "lists.h"
/**
 *dlistint_len - returns the length of a list
 *@h: pointer to header of list
 *Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	if (!h)
		return (0);
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
