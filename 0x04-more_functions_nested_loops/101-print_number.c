#include "main.h"
/**
 *print_number - prints an integer
 *@n: integer argument
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	int a = n / 10000;
	int b = (n % 10000) / 1000;
	int c = (n % 1000) / 100;
	int d = (n % 100) / 10;
	int e = n % 10;

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
	_putchar('\n');
}
