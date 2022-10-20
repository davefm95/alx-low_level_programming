#include "main.h"
/**
 *print_line - prints a line
 *@n: variable that determines line length
 */
void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		for (; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
