#include <stdlib.h>
/**
 *_strcat - cocayenates two strings
 *@dest: firat string
 *@src: second string
 *Return: returns concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int stlen1, i, stlen2, nwstlen;
	char *ptr;

	stlen1 = 0;
	stlen2 = 0;
	while (*dest)
	{
		stlen1++;
		dest++;
	}
	while (*src)
	{
		stlen2++;
		src++;
	}
	nwstlen = (stlen1 + stlen2) + 1;
	ptr = (char *)malloc(nwstlen * sizeof(char));
	for (i = 0; i < nwstlen - 1; i++)
	{
		if (i < stlen1)
			ptr[i] = dest[i];
		else
			ptr[i] = src[(i - stlen1)];
	}
	ptr[i] = '\0';
	free(dest);
	dest = ptr;
	return (dest);
}
