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

	for (i = 0, ac1 = 48; i < 10; i++, ac1++)
	{
		for (j = 0, ac2 = 48; j < 10; j++, ac2++)
		{
			if (ac2 > ac1)
			{
				putchar(ac1);
				putchar(ac2);
				if ((i == 8) && (j == 9))
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
	putchar('\n');
	return (0);
}
