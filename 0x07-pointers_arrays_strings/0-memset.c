/**
 *_memset - fills a memory with constant byte
 *@s: string given
 *@b: constant byte to fill memory with
 *@n: size of memory to be filled
 *Return: returns altered string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *scopy;

	scopy = s;
	while (n)
	{
		*scopy = b;
		scopy++;
		n--;
	}
	return (s);
}
