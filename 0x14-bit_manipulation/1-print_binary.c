#include <stdio.h>

/**
 *print_binary - prints binary rep of nos
 *@n: number
 */
void print_binary(unsigned long int n)
{
	unsigned int b = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n == 1)
	{
		printf("1");
		return;
	}
	for (; b * 2 <= n;)
		b *= 2;
	while (b > 0)
	{
		if (b <= n)
		{
			printf("1");
			n -= b;
			b >>= 1;
			continue;
		}
		printf("0");
		b >>= 1;
	}
}
