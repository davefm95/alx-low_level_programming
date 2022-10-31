#include <stddef.h>
/**
 *_strchr - locates a character in a string
 *@s: string to be checked
 *@c: character being chwcked for
 *Return: returns pointer to  character in string ,0 otherwise
 */

char *_strchr(char *s, char c)
{
	char *sc = s;
	int slen = 0;

	while (sc[slen])
		slen++;
	slen++;
	while (slen)
	{
		if (*sc == c)
			return (sc);
		sc++;
		slen--;
	}
	return (NULL);
}
