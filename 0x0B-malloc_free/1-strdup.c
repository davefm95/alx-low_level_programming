#include <stdlib.h>
/**
 *_strdup - copirs a string into memeory and returns pointer to copy
 *@str: string to br copied
 *Return: returns pointer to copied string
 */
char *_strdup(char *str)
{
	char *strdup;
	int i, strlen = 0;

	if (str == NULL)
		return (NULL);
	while (str[strlen])
		strlen++;
	strdup = malloc(strlen * sizeof(*strdup));
	if (strdup == NULL)
		return (NULL);
	for (i = 0; i < strlen; i++)
		strdup[i] = str[i];
	strdup[i] = '\0';
	return (strdup);
}
