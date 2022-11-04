#include "main.h"
#include <stdio.h>
/**
 *main - adds integers continuously
 *@argc: number of arguments
 *@argv: arraybof arguments
 *Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int expnum, i, j, num, convnum, sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = 0;
		j = 0;
		expnum = 1;
		while (argv[i][j])
		{
			if (!(argv[i][j] <= '9' && argv[i][j] >= 1))
			{
				printf("Error\n");
				return (1);
			}
			expnum *= 10;
			j++;
		}
		expnum /= 10;
		for (j = 0; argv[i][j]; j++, expnum /= 10)
		{
			convnum = (argv[i][j] - '0') * expnum;
			num += convnum;
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
