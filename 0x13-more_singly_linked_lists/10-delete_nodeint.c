#include "lists.h"
/**
 *delete_nodeint_at_index- deletes node at particulat index
 *@head: poinyer to bead pointer
 *@index: index of node to bedeleted
 *Return: 1 if successful -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *remnode;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if (temp->next == NULL)
		{
			free(temp);
			*head = NULL;
			return (1);
		}
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (temp->next == NULL)
			return (-1);
		if (i + 1 == index)
		{
			remnode = temp->next;
			temp->next = remnode->next;
			free(remnode);
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
