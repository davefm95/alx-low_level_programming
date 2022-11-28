#include "lists.h"
/**
 *free_listint - frees a list
 *@head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *tempnode = head->next;

	if (head == NULL)
		return;
	while (tempnode)
	{
		free(head);
		head = tempnode;
		tempnode = tempnode->next;
	}
	free(head);
}
