#include "lists.h"
/**
 *add_dnodeint_end - adds a node to the end of list
 *@head: pointer to head pointer
 *@n: int value of node
 *Return: pointer to new node or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nu_node, node_end;

	nu_node = malloc(sizeof(dlistint_t));
	if (!nu_node)
		return (NULL);
	nu_node->n = n;
	nu_node->next = NULL;
	if (!*head)
	{
		nu_node->prev = NULL;
		*head = nu_node;
		return (*head);
	}
	node_end = *head;
	while (node_end->next != NULL)
	{
		node_end = node_end->next;
	}
	nu_node->prev = node_end;
	node_end->next = nu_node;
	return (nu_node);
}
