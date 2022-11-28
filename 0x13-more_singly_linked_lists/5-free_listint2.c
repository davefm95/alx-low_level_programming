#include "lists.h"
/**
 *free_listint2 - frees a lsit and sets the pointer to NULL
 *@head: pointer to head node pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *tempnode;

	if (*head == NULL)
		return;
	tempnode = (**head).next;
	while (tempnode)
	{
		free(*head);
		*head = tempnode;
		tempnode = tempnode->next;
	}
	free(*head);
	*head = NULL;
}
