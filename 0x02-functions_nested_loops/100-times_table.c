#include <stdio.h>
/**
 *print_times_table - prints times tabke of a specified number
 *@n: specified integer
 */
void print_times_table(int n)
{
	int i, j, s;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				s = i * j;
				printf("%d", s);
				if (j != n)
				{
					if (s + i < 10)
						printf(",   ");
					else if (s + i < 100)
						printf(",  ");
					else
						printf(", ");
				}
				else
					printf("\n");
			}
		}
	}
	else
		printf("0\n");
}
