/**
 *_sqrt_recursion - fonda the square root of an int
 *sr - function that actually does the recursion
 *@n: number whose squareroot is to be found
 *@no: number varibale in subfunc
 *@oddno: oddno variable
 *@sq: variable int
 *Return: return squareroot of n
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
int _sqrt_recursion(int n)
{
	int num = n, oddnum = 1, sqrt = 0;

	sqrt = sr(num, oddnum, sqrt);
	return (sqrt);
}
