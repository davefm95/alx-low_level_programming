#include "lists.h"
/**
 *sum_dlistint - adds all rhe int values of nodes in a list
 *@head: pointer to list head
 *Return: sum of ints in list or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
