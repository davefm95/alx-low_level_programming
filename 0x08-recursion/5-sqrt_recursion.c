/**
 *_sqrt_recursion - fonda the square root of an iny
 *@n: number whose squareroot is to be found
 *Return: return squareroot of n
 */
int _sqrt_recursion(int n)
{
	int num = n, oddnum = 1, sqrt = 0;

	int sr(int no, int oddno, int sq)
	{
		if (no < 0)
			return (-1);
		if (no == 0)
			return (sq);
		sq++;
		no -= oddno;
		oddno += 2;
		sr(no, oddno, sq);
	}
	sqrt = sr(num, oddnum, sqrt);
	return (sqrt);
}
