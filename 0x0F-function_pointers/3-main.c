#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *main - performs simple operations
 *@argc: number of args to main
 *@argv: array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2, i;
	op_t opt;
	char *o[] = {"+", "-", "*", "/", "%"};

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	opt.op = argv[2];
	for (i = 0; i < 5; i++)
	{
		if (strcmp(opt.op, o[i]) == 0)
		{
			if ((strcmp(opt.op, "/") == 0 || strcmp(opt.op, "%") == 0) && num2 == 0)
			{
				printf("Error\n");
				exit(100);
			}
			opt.f = get_op_func(opt.op);
			result = opt.f(num1, num2);
			printf("%d\n", result);
			return (0);
		}
	}
	printf("Error\n");
	exit(99);
}
