#include <stdio.h>
/**
 *print_diagsums - prints sum of two diagonals of a square matrix of integers
 *@a: matrix array
 *@size: size of array
 */
void print_diagsums(int *a, int size)
{
	int square_size = size * size;
	int i, sumlr = 0, sumrl = 0;

	for (i = 0; i < square_size; i++)
	{
		if (i % (size + 1) == 0)
			sumlr += a[i];
		if (i % (size - 1) == 0)
			sumrl += a[i];
	}
	printf("%d, %d", sumlr, sumrl);
}
