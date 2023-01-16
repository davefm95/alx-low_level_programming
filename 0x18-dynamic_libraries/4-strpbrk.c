#include <stddef.h>
/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: string to be searched
 *@accept: string with charactes to be matched against
 *Return: pointer to the matching char if found, or NULL if not
 */
char *_strpbrk(char *s, char *accept)
{
	char *sc = s, *ac;

	while (*sc)
	{
		ac = accept;
		while (*ac)
		{
			if (*sc == *ac)
			{
				return (sc);
			}
			ac++;
		}
		sc++;
	}
	return (NULL);
}
