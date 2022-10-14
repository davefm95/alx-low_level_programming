#include <stdio.h>
/**
 *main - prints all combinations of single digit numbers
 *
 *Return: returns 0 on completion
 */
int main(void)
{
	int i;
	int j;
	int ac1;
	int ac2;

	for (i = 1, ac1 = 48; i < 11; i++)
	{
		for (j = 1, ac2 = 48; j < 11; j++)
		{
			putchar(ac1);
			putchar(ac2);
			putchar(',');
			ac2++;
		}
		ac1++;
	}
	putchar('\n');
	return (0);
}
