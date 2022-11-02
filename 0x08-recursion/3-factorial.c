/**
 *factorial - calculates factorial of given number n
 *@n: given number
 *Return: factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (n * factorial(n - 1));
}
