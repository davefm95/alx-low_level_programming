#include "lists.h"
/**
 *list_len - counts number of elements in linked list
 *@h: pointer to linkd list
 *Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
