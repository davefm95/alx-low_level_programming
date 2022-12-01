/**
 *flip_bits - counts number of bits required to flip ome number to another
 *@n: first number
 *@m: second number
 *Return: number of bits flippped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, xnum;

	xnum = n ^ m;
	while (xnum > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
