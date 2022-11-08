#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - function to allocate memory to grid
 * @width: int type
 * @height: int type
 * Return: grid of 0s
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **td;

	if (width <= 0 || height <= 0)
	{
		return  (NULL);
	}
	td = malloc(height * sizeof(int *));
	if (td == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		td[i] = malloc(width * sizeof(int));
		if (td[i] == NULL)
		{
			for (j = 0; j < i;  j++)
				free(td[j]);
			free(td);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			td[i][j] = 0;
		}
	}
	return (td);
}
