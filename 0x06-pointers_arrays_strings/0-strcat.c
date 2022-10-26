#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_strcat - cocayenates two strings
 *@dest: firat string
 *@src: second string
 *Return: returns concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int stlen1, i, stlen2, nwstlen;
	static char *ptr;
	char *dest2, *src2;

	stlen1 = 0;
	stlen2 = 0;
	dest2 = dest;
	src2 = src;
	while (*dest2)
	{
		stlen1++;
		dest2++;
	}
	while (*src2)
	{
		stlen2++;
		src2++;
	}
	nwstlen = (stlen1 + stlen2) + 1;
	ptr = malloc(nwstlen * sizeof(*ptr));
	for (i = 0; i < nwstlen - 1; i++)
	{
		if (i < stlen1)
			ptr[i] = dest[i];
		else
		{
			ptr[i] = src[i - stlen1];
		}
	}
	ptr[i] = '\0';
	dest = ptr;
	return (dest);
}
