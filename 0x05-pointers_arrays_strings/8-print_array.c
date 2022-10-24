#include <stdio.h>
/**
 *print_array - prints a given number of elements in an array
 *@a: arrau pointer variable
 *@n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
