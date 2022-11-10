#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings up to a certain number of bytes
 *@s1: first string
 *@s2: second string
 *@n: number of bytes/chars of s2 to concat to s1
 *Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strncat;
	unsigned int s1l = 0, s2l = 0, i, j;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	while (s1[s1l])
		s1l++;
	while (s2[s2l])
		s2l++;
	if (n >= s2l)
		n = s2l;
	strncat = malloc(sizeof(char) * (s1l + n + 1));
	if (strncat == NULL)
		return (NULL);
	for (i = 0, j = 0; i < (s1l + n + 1); i++)
	{
		if (i < s1l)
		{
			strncat[i] = s1[i];
		}
		else if (j < n)
		{
			strncat[i] = s2[j];
			j++;
		}
		else
			strncat[i] = '\0';
	}
	return (strncat);
}
