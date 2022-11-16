#include <stdlib.h>
/**
 *int_index - searches for an integer
 *@array: array to be searched
 *@size: size of array
 *@cmp: pointer to function thats doin the searching
 *Return: index of matching elemnt or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
