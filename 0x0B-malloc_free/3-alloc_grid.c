#include <stdlib.h>
#include <stdio.h>
/**
 *alloc_grid - returns pointer to 2 dimensional array of integers
 *@width: length of internal array
 *@height: length of container array
 *Return: returns pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **tdarr = malloc(height * sizeof(int *));
	int i, j;

	if (tdarr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tdarr[i] = malloc(width * sizeof(int));
		if (tdarr[i] = NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			tdarr[i][j] = 0;
			printf("%d ",tdarr[i][j]);
		}
	}
	return (tdarr);
}
