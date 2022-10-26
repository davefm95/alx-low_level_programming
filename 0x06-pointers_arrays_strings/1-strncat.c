#include <stdlib.h>
/**
 *_strncat - joins specified number of characters of string src to string dest
 *@dest: first string
 *@src: second string
 *Return: returns dest
 *@n: number of characters to copy
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, dstl = 0, nwstl;
	char *cstp, *dest2;
	static char *nwst;

	cstp = (char *)malloc(n * sizeof(char));
	for (i = 0; i < n; i++)
		cstp[i] = src[i];
	dest2 = dest;
	while (*dest2)
	{
		dstl++;
		dest2++;
	}
	nwstl = n + dstl + 1;
	nwst = malloc(nwstl * sizeof(char));
	for (i = 0; i < nwstl - 1; i++)
	{
		if (i < dstl)
			nwst[i] = dest[i];
		else
			nwst[i] = cstp[i - dstl];
	}
	nwst[i] = '\0';
	dest = nwst;
	return (dest);
}
