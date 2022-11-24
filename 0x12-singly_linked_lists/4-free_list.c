#include "lists.h"
/**
 *free_list - frees all list nodes
 *@head: first node
 */
void free_list(list_t *head)
{
	list_t *holdnode;

	if (head == NULL)
		return;
	holdnode = head->next;
	while (holdnode)
	{
		free(head->str);
		free(head);
		head = holdnode;
		holdnode = holdnode->next;
	}
	free(head->str);
	free(head);
}
