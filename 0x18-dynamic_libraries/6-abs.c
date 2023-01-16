/**
 *_abs - computes absolute value of a number
 *@n: number argument to the function
 *
 *Return: returns the absolute value of n
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-(n));
	else
		return (0);
}
