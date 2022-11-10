#include <stdlib.h>
/**
 *array_range - creates an array of integers of given range
 *@min: lowest number in range
 *@max: highest number in range
 *Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int l, i;
	int *p;

	if (min > max)
		return (NULL);
	l = (max - min) + 1;
	p = malloc(l * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
		p[i] = min;
	return (p);
}
