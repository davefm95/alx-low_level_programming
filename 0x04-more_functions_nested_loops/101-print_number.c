#include "main.h"
/**
 *print_number - prints an integer
 *@n: integer argument
 */
void print_number(int n)
{
	/*initialize variable sum to find n's power of 10*/
	int sum;
	int i;
	int powten;

	if (n >= -2147483648 && n <= 2147483647)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		if (n < 10)
			_putchar(n % 10 + '0');
		else
		{
			sum = 0;
			for (i = n; i >= 10; i /= 10)
				sum++;
			powten = 1;
			for (i = sum; i > 0; i--)
				powten *= 10;
			for (i = powten; i >= 10; i /= 10)
			{
				_putchar(n / i + '0');
				n = n % i;
				if (i == 10)
					_putchar(n + '0');
			}
		}
	}
}
