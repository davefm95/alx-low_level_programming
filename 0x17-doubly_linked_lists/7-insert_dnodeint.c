#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts node at index in list
 *@h: pointer to head of list pointer
 *@idx: index at which node is to be inserted
 *@n: int value of node
 *Return: address of new node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp;
	unsigned int count = 0;

	if (!*h && idx != 0)
		return (NULL);
	if (idx == 0)
	{
		node = malloc(sizeof(dlistint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = *h;
		node->prev = NULL;
		*h = node;
		return (*h);
	}
	temp = *h;
	while (temp)
	{
		if (count == idx)
		{
			node = malloc(sizeof(dlistint_t));
			if (!node)
				return (NULL);
			node->n = n;
			node->next = temp;
			node->prev = temp->prev;
			temp->prev->next = node;
			temp->prev = node;
			return (node);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
