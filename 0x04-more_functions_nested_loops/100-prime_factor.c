#include <stdio.h>
/**
 *main - prints largest prime factor of 612852475143
 *Return: Always 0
 */
int main(void)
{
	long int num = 612852475143;
	long int hpf;
	long int i = 2;

	while (i < num)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
		else
		{
			if (i == num - 1)
				hpf = num;
			i++;
		}
	}
	printf("%ld\n", hpf);

	return (0);
}
