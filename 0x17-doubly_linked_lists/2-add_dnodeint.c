#include "lists.h"
/**
 *add_dnodeint - adds a node to the begining of a doulbly linked list
 *@head: pointer to poinyer to head of list
 *@n: int value of node
 *Return: poinyer to new node or Null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nu_node;

	nu_node = malloc(sizeof(dlistint_t));
	if (!nu_node)
		return (NULL);
	nu_node->n = n;
	nu_node->prev = NULL;
	nu_node->next = *head;
	if (*head)
		(**head).prev = nu_node;
	*head = nu_node;
	return (*head);
}
