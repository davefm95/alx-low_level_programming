#include "lists.h"
/**
 *sum_listint - calcs the sum of all the data in each node ofa list
 *@head: pointer to first node in list
 *Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
