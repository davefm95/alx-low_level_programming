#include "lists.h"
/**
 *add_node- adds a node at the beginning of a list
 *@head: current top node
 *@str: string member to new node
 *Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_head;

	n_head = malloc(sizeof(list_t));
	if (n_head == NULL)
		return (*head);
	n_head->str = strdup(str);
	n_head->len = strlen(str);
	n_head->next = *head;
	*head = n_head;
	return (*head);
}
