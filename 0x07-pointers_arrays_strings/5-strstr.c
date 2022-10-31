#include <stddef.h>
/**
 *_strstr - locates a substring needle in string haystack
 *@haystack: string to be searched in
 *@needle: substring to search for
 *Return: returns pointer to beginning of located substring or 0 otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int ndlen = 0, substlen, i, j;
	char *hs;

	while (needle[ndlen])
		ndlen++;
	for (hs = haystack; *hs; hs++)
	{
		substlen = 0;
		j = 0;
		i = (int)(hs - haystack);
		for (; needle[j] && haystack[i] == needle[j]; j++, i++)
		{
			substlen++;
		}
		if (substlen == ndlen)
			return (hs);
	}
	return (NULL);
}
