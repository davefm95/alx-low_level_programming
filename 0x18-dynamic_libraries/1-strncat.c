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
	int i = 0, dstl = 0;

	while (dest[dstl])
		dstl++;
	for (; src[i] && i < n; i++, dstl++)
		dest[dstl] = src[i];
	dest[dstl] = '\0';
	return (dest);
}
