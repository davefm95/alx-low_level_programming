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
	int result, num1, num2;
	op_t opt;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	opt.op = argv[2];
	opt.f = get_op_func(opt.op);
	if (opt.f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((strcmp(opt.op, "/") == 0 || strcmp(opt.op, "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = opt.f(num1, num2);
	printf("%d\n", result);
	return (0);
}
