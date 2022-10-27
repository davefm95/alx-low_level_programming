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
	for (i = 0; dstl < nwstl; i++, dstl++)
		dest[dstl] = cstp[i];
	return (dest);
}
