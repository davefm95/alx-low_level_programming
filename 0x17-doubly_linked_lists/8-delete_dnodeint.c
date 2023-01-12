#include "lists.h"
/**
 *delete_dnodeint_at_index - deleyes node at index
 *@head: pointer to head poinyer
 *@index: index of node to be deleted
 *Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (count == index && temp->next != NULL)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		else if (count == index && !temp->next)
		{
			temp->prev->next = NULL;
			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
