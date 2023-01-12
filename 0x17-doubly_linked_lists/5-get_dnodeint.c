#include "lists.h"
/**
 *get_dnodeint_at_index - gets node at index
 *@head: list head
 *@index: index of node to be retrieved
 *Return: pointer to node at given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		count++;
		if (count == index + 1)
			return (head);
		head = head->next;
	}
	if (!head)
		return (NULL);
}
