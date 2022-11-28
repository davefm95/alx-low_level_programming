#include "lists.h"
/**
 *get_nodeint_at_index - gets  nth node of a listint_t linked list.
 *@head: first node in list
 *@index: index of node to be found
 *Return: node with index n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *reqnode;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
			reqnode = head;
		i++;
		head = head->next;
	}
	return (reqnode);
}
