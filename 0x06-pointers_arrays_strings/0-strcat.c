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
	int stlen1, i, stlen2, nwstlen, j;
	char *ptr;

	stlen1 = 0;
	stlen2 = 0;
	while (*dest)
	{
		stlen1++;
		dest++;
	}
	dest = dest - stlen1;
	while (*src)
	{
		stlen2++;
		src++;
	}
	src = src - stlen2;
	nwstlen = (stlen1 + stlen2) + 1;
	ptr = malloc(nwstlen * sizeof(*ptr));
	for (i = 0; i < nwstlen; i++)
	{
		if (i < stlen1)
			ptr[i] = dest[i];
		else
			ptr[i] = src[i - stlen1];
	}
	for (; stlen1 < nwstlen; stlen1++)
		dest[stlen1] = ptr[stlen1];
	return (dest);
}
