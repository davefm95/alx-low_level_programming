#include <stdio.h>
#include "main.h"
/**
 *main - multiplies two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 1 if argc doesnt equal 2; 0 otherwise
 */
int main(int argc, char *argv[])
{
	int lenno, expnum, i, convnum, num1 = 0, num2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	argv++;
	for (i = 1; i < argc; i++, argv++)
	{
		lenno = 0;
		expnum = 1;
		while (**argv)
		{
			lenno++;
			expnum *= 10;
			*argv += 1;
		}
		expnum /=10;
		*argv = *argv - lenno;
		for (; **argv; *argv += 1, expnum /=  10)
		{
			convnum = (**argv - '0') * expnum;
			if (i == 1)
				num1 += convnum;
			else
				num2 += convnum;
		}
	}
	printf("%d\n", num1 * num2);
	return (0);
}
