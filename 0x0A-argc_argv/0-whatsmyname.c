#include <stdio.h>
/**
 *main - prints iut the name of the file
 *@argc: number of arguments
 *@argv: pointer to array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
