#include <stdio.h>
/**
 *print_diagsums - prints sum of two diagonals of a square matrix of integers
 *@a: matrix array
 *@size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, j, sumlr = 0, sumrl = 0, lstArrEle = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sumlr += a[i][j];
			if (i + j == lstArrEle - 1)
				sumrl += a[i][j];
		}
	}
	printf("%d, %d", sumlr, sumrl);
}
