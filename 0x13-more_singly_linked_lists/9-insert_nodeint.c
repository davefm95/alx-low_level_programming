#include "lists.h"
/**
 *insert_nodeint_at_index - inserts node at given index
 *@head: pointer to head node pointer
 *@idx: index at which new node should be added
 *@n: inyeger data of node
 *Return: newly creayed node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int index = 0;

	if (head == NULL || *head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}
	temp = *head;
	while (temp)
	{
		if (index == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			break;
		}
		index++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	return (node);
}
