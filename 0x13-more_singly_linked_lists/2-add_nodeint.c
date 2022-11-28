#include "lists.h"
/**
 *add_nodeint - adds node at beginning of list
 *@head: pointer to node to be added
 *@n: integer property of node
 *Return: pointer to newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
