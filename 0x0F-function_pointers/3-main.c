#include <stdlib.h>
#include <stdio.h>
/**
 *main - performs simple operations
 *@argc: number of args to main
 *@argv: array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2][0];
	if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (op == '/' || op == '%' && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", result);
