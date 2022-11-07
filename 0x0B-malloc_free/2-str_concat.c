#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: returns pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *nust;
	int i, s1l = 0, s2l = 0, nustl;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	while (*s1)
	{
		s1l++;
		s1++;
	}
	while (*s2)
	{
		s2l++;
		s2++;
	}
	s1 = s1 - s1l;
	s2 = s2 - s2l;
	nustl = s1l + s2l + 1;
	nust = malloc(nustl * sizeof(char));
	if (nust == NULL)
		return (NULL);
	for (i = 1; i <= nustl; i++, nust++)
	{
		if (*s1)
		{
			*nust = *s1;
			s1++;
		}
		else
		{
			*nust = *s2;
			s2++;
		}
	}
	nust -= nustl;
	return (nust);
}
