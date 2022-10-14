#include <stdio.h>
/**
 *main - prints all possible combinations of 2 digit numbers
 *
 *Return: returns 0 on completion
 */
int main(void)
{
	int i;
	int j;
	int ac1;
	int ac2;

	for (i = 1, ac1 = 48; i < 11; i++, ac1++)
	{
		for (j = 1, ac2 = 48; j < 11; j++)
		{
			if (ac1 != ac2)
			{
				putchar(ac1);
				putchar(ac2);
				if ((i == 10) && (j == 10))
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
					ac2++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
