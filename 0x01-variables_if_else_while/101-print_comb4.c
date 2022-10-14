#include <stdio.h>
/**
 *main - prints every combination of 3 digit numbers without repetition
 *
 *Return: returns 0 on completion
 */
int main(void)
{
	int i;
	int j;
	int k;
	int ac1;
	int ac2;
	int ac3;

	for (i = 0, ac1 = 48; i < 10; i++, ac1++)
	{
		for (j = 0, ac2 = 48; j < 10; j++, ac2++)
		{
			for (k = 0, ac3 = 48; k < 10; k++, ac3++)
			{
				if ((ac2 > ac1) && (ac3 > ac2))
				{
					putchar(ac1);
					putchar(ac2);
					putchar(ac3);
					if ((i == 7) && (j == 8) && (k == 9))
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
