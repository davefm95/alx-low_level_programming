#include "main.h"
/**
 *times_table - prints the timstable from 0-9
 */
void times_table(void)
{
	int i, j, k, l, t;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			t = i * j;
			if (t < 10)
			{
				_putchar(t + '0');
				if (t < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				k = t / 10;
				l = t % 10;
				_putchar(k + '0');
				_putchar(l + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (j == 9)
				_putchar('\n');
		}
	}
}
