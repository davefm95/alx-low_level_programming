#include "lists.h"
/**
 *free_dlistint - freea s doubly linked list
 *@head: pointer to list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

	if (!head)
		return;
	while (head)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
