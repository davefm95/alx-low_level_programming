#include <stddef.h>
/**
 *array_iterator - executes a function  on each element of an array
 *@array: array to be iterated over
 *@size: size of the array
 *@action: pointer to function that will work over the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
