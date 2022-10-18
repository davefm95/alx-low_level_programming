#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: number argument for the function
 *
 *Return: returns the last digit
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l > 0 || l == 0)
		return (l);
	else
		return (-(l));
}
