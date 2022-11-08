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
	int **tdarr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	tdarr = malloc(height * sizeof(int *));
	if (tdarr == NULL)
	{
		free(tdarr);
		return (NULL);
	}
	tdarr[0] = malloc(height * width * sizeof(int));
	if (tdarr[0] == NULL)
	{
		free(tdarr[0]);
		free(tdarr);
		return (NULL);
	}
	for (i = 1; i < height; i++)
		tdarr[i] = tdarr[0] + i * width;
	for (i = 0; i < height; i++)
		for (j = 0; j < height; j++)
			*(tdarr[i] + j) = 0;
	return (tdarr);
}
