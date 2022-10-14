#include <stdio.h>
/**
 *main - prints all combinations of single digit numbers
 *
 *Return: returns 0 on completion
 */
int main(void)
{
	int i;
	int ac1;

	for (i = 1, ac1 = 48; i < 11; i++)
	{
		putchar(ac1);
		if (i < 10)
		{
			putchar(',');
			putchar(' ');
			ac1++;
		}
	}
	putchar('\n');
	return (0);
}
