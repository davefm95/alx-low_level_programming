#include <stddef.h>
/**
 *binary_to_uint - converts binary to unsigned int
 *@b: string of binary number
 *Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int pow2, bstlen = 0;
	int n, base;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (b[bstlen])
	{
		if (b[bstlen] != '1' && b[bstlen] != '0')
			return (0);
		bstlen++;
	}
	pow2 = bstlen - 1;
	bstlen = 0;
	for (; pow2 >= 0; pow2--, bstlen++)
	{
		base = 1;
		for (n = 0; n < pow2; n++)
			base *= 2;
		num += ((b[bstlen] - '0') * base);
	}
	return (num);
}
