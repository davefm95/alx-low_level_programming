#include <stdio.h>
/**
 *main - prints all possible combunations of two two digit numbers
 *
 *Return: returns 0 on completion
 */
int main(void)
{
	int i, j, a, b, c, d;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			a = i / 10;
			b = i % 10;
			c = j / 10;
			d = j % 10;

			if (j > i)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				if ((i == 98) && (j == 99))
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
