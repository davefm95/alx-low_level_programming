/**
 *_strncpy - copies a specified number of characters from one pointer to another
 *@dest: pointer to be copied to
 *@src: pointer to be copied from
 *@n: number of characters to copy
 *Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, src = 0, destl = 0;

	while (src[srcl])
		srcl++;
	while (dest[destl]
	       destl++;
	if(n > srcl)
	{
		for (i = 0; i < destl; i++)
		{
			if (i < srcl)
				dest[i] = src[i];
			else
				dest[i] = '\0';
		}
	}
	else
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
