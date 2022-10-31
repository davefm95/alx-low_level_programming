/**
 *_memcpy - function copies n bytes from memory area src to memory area dest
 *@dest: memory to be copied to
 *@src: memory to be copied from
 *@n: numberof bytes to copy
 *Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dcopy = dest, *scopy = src;

	while (n)
	{
		*dcopy = *scopy;
		dcopy++;
		scopy++;
		n--;
	}
	return (dest);
}
