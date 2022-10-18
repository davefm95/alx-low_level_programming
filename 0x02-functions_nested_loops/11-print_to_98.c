#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - prints natural nos from n - 98
 *@n: the given integer argument
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n > 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			if (n < 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
	_putchar('\n');
}
