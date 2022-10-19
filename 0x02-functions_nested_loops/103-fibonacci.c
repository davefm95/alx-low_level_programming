#include <stdio.h>
/**
 *main - prints the sum kf posituve numbers of fibonacci sequenxe
 *
 *Return: always 0
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum = 0;
	int i = 1;

	sum = b;
	for (; i < 48; i++)
	{
		if (i % 2 != 0)
		{
			a += b;
			if (a % 2 == 0)
			{
				sum += a;
			}
		}
		else
		{
			b += a;
			if (b % 2 == 0)
				sum += b;
		}
	}
	printf("%li\n", sum);
	return (0);
}
