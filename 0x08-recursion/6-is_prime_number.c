/**
 *isprno - subfunction to check for a prime number
 *@div: divisor
 *@no: number to be checked
 *Return: 1 or 0
 */
int isprno(int no, int d)
{
	if (d < no)
	{
		if (no % d == 0)
		{
			return (0);
		}
		else
		{
			return (isprno(no, d + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 *is_prime_number - main function that calls isprno
 *@n: number to be checked
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
	int num = n, d = 2;

	if (num <= 1)
		return (0);
	else
		return (isprno(num, d));
}
