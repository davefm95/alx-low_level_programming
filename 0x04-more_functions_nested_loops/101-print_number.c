#include "main.h"
#include <math.h>
/**
 *print_number - prints an integer
 *@n: integer argument
 */
void print_number(int n)
{
	if (n >= -2147483647 && n <= 2147483647)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		/*initialize variable sum to find n's power of 10*/
		int sum = 0;
		int i;

		for (i = n; i >= 10; i / 10)
			sum++;
		for (i = pow(10, sum); i >= 10; i / 10)
		{
			_putchar(n / i + '0');
			n = n % i;
			if (i == 10)
				_putchar(n + '0');
		}
	}
}
