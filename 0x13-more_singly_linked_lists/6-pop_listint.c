#include "lists.h"
/**
 *pop_listint - deletes first node in list
 *@head: pointer to head node pointer
 *Return: the data contained in head
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *tempnode;

	if (head == NULL || *head == NULL)
		return (0);
	tempnode = *head;
	*head = (**head).next;
	num = tempnode->n;
	free(tempnode);
	return (num);
}
