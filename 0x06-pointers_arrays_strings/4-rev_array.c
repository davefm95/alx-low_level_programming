#include <stdlib.h>
/**
 *reverse_array - reverses the contents of an array
 *@n: number of elements in array
 *@a: array to bre reversed
 *Return: returns reversed array
 */
void reverse_array(int *a, int n)
{
	int *b, i;

	b = malloc(n * sizeof(*b));
	for (i = 0; i < n; i++)
		b[i] = a[(n - 1) - i];
	for (i = 0; i < n; i++)
		a[i] = b[i];
}
