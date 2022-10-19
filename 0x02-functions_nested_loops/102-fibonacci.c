#include <stdio.h>
/**
 *main - prints first 50 numbers of a fibonacci sequence starting with 1 and 2
 *
 *Return: returns 0 on completion
 */
int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	int i = 1;

	printf("%li, %li, ", n1, n2);
	for (; i <= 48; i++)
	{
		if (i % 2 != 0)
		{
			n1 += n2;
			printf("%li", n1);
		}
		else
		{
			n2 += n1;
			printf("%li", n2);
		}
		if (i < 48)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
