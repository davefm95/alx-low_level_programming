#include "main.h"
/**
 *print_triangle - prints a triangle to terminal
 *@size: dimension of triangke to be printed
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = size - i;
			for (; j > 0; j--)
				_putchar(' ');
			for (k = i; k > 0; k--)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
