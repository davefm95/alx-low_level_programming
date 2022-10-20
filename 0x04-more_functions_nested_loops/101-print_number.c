#include "main.h"
/**
 *print_number - prints an integer
 *@n: integer argument
 */
void print_number(int n)
{
	int a, b, c, d, e;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	a = n / 10000;
	b = (n % 10000) / 1000;
	c = (n % 1000) / 100;
	d = (n % 100) / 10;
	e = n % 10;
	if (n < 100)
	{
		if (d != 0)
			_putchar(d + '0');
		_putchar(e + '0');
	}
	else if (n < 1000)
	{
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar(e + '0');
	}
	else if (n < 10000)
	{
		_putchar(b + '0');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar(e + '0');
	}
	else if (n < 100000)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar(e + '0');
	}
}
