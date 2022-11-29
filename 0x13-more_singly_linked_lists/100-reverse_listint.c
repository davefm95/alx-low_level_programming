#include "lists.h"
/**
 *reverse_listint - reverses a listint_t list
 *@head: pointer to head pointer of list
 *Return: pointer to new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *holdnode;

	if (head == NULL || *head == NULL)
		return (NULL);
	holdnode = *head;
	if (holdnode->next == NULL)
		return (*head);
	temp = holdnode->next;
	holdnode->next = NULL;
	while (temp)
	{
		*head = temp;
		temp = temp->next;
		(**head).next = holdnode;
		holdnode = *head;
	}
	return (*head);
}
