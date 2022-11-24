#include "lists.h"
/**
 *add_node_end - adds a node to the end of liat
 *@head: first node
 *@str: string memeber of nodes to be added
 *Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *next_node, *node_end;

	next_node = malloc(sizeof(list_t));
	if (next_node == NULL)
		return (NULL);
	next_node->str = strdup(str);
	next_node->len = strlen(str);
	next_node->next = NULL;
	if (*head == NULL)
	{
		*head = next_node;
		return (*head);
	}
	node_end = *head;
	while (node_end)
	{
		if (node_end->next == NULL)
		{
			node_end->next = next_node;
			break;
		}
		node_end = node_end->next;
	}
	return (next_node);
}
