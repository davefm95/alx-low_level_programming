#include "lists.h"
/**
 *add_nodeint_end - adds node to end of list
 *@head: pointer first node in list
 *@n: integer prolerty of node
 *Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tempnode;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	tempnode = *head;
	while (tempnode)
	{
		if (tempnode->next == NULL)
		{
			tempnode->next = node;
			break;
		}
		tempnode = tempnode->next;
	}
	return (node);
}
