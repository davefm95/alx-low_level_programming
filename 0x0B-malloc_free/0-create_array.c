#include <stdlib.h>
/**
 *create_array - creates array of size 'size' with char 'c'
 *@size: size of array to be cretaed
 *@c: character to initialise array with
 *Return: returns pointer to first element in array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (!size)
		return (NULL);
	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
