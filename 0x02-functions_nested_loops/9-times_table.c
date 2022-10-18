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
			k = t / 10;
			l = t % 10;
			if (t < 10)
				_putchar(t + '0');
			else
			{
				_putchar(k + '0');
				_putchar(l + '0');
			}
			if (j == 9)
				_putchar('\n');
			else
			{
				if (t + i < 10)
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
		}
	}
}
