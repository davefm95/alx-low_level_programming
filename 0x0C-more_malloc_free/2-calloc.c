#include <stdlib.h>
/**
 *_calloc - allocates memory for an array and initialises all items to 0
 *@nmemb: number of elements in the array
 *@size: size in bytes of each element
 *Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	char *zero;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	zero = p;
	for (i = 0; i < nmemb; i++)
		zero[i] ='\0';
	return (p);
}
