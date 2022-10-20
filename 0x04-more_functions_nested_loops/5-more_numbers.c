#include "main.h"
/**
 *more_numbers - prints the numbers 0-14 10 times
 */
void more_numbers(void)
{
	int i, j, a, b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15)
		{
			a = j / 10;
			b = j % 10;
			if (a > 0)
				_putchar(a + '0');
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
