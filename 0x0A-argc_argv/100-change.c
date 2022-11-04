#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints the minimum number of coins to make change
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int nofcoins = 0, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(*(argv + 1));
	if (num < 0)
	{
		nofcoins = 0;;
	}
	else
	{
		for (; num > 0;)
		{
			if (num >= 25)
				num -= 25;
			else if (num >= 10)
				num -= 10;
			else if (num >= 5)
				num -= 5;
			else if (num >= 2)
				num -= 2;
			else
				num -= 1;
			nofcoins++;
		}
	}
	printf("%d\n", nofcoins);
	return (0);
}
