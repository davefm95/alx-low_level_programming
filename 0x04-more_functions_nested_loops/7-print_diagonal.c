#include "main.h"
/**
 *print_diagonal - prints a diagonal in the terminal
 *@n: number of times \ is printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			j = i - 1;
			for (; j > 0; j--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
