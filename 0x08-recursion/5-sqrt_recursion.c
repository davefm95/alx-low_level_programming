/**
 *sr - function that actually does the recursion
 *@no: number varibale in subfunc
 *@oddno: oddno variable
 *@sq: variable int
 *Return: sq
 */
int sr(int no, int oddno, int sq)
{
	if (no < 0)
		return (-1);
	if (no == 0)
		return (sq);
	sq++;
	no -= oddno;
	oddno += 2;
	return (sr(no, oddno, sq));
}

/**
 *_sqrt_recursion - fonda the square root of an int
 *@n: number argument
 *Return: returns squareroot
 */
int _sqrt_recursion(int n)
{
	int num = n, oddnum = 1, sqrt = 0;

	sqrt = sr(num, oddnum, sqrt);
	return (sqrt);
}
