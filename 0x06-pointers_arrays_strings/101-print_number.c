#include <limits.h>
#include "main.h"
/**
 *print_number - prints an integer
 *@n: integer argument
 */
void print_number(int n)
{
	/*initialize variable expnt_n to find n's power of 10*/
	int expnt_n;
	int i;
	int powten;

	if (n >= INT_MIN && n <= INT_MAX)
	{
		if (n < 0)
		{
			_putchar('-');
			if (n == INT_MIN)
			{
				_putchar((-(n / 1000000000)) + '0');
				n = n % 1000000000;
			}
			n = -n;
		}
		if (n < 10)
			_putchar(n % 10 + '0');
		else
		{
			expnt_n = 0;
			for (i = n; i >= 10; i /= 10)
				expnt_n++;
			powten = 1;
			for (i = expnt_n; i > 0; i--)
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
