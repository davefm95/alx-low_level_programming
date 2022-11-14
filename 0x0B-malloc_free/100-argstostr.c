#include <stdlib.h>
/**
 *argstostr - voncatenates argumemts to program
 *@ac: number of argyments
 *@av: pointer to arraybog arguments
 *Return: pointer to new string or null upon failure
 */
char *argstostr(int ac, char **av)
{
	int stlen = 0, i, j, k, numlb = 0;
	char *st;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0;; j++)
		{
			if (av[i][j] == '\0')
			{
				numlb++;
				break;
			}
			stlen++;
		}
	}
	stlen = stlen + numlb + 1;
	st = malloc(stlen * sizeof(char));
	if (st == NULL)
		return (NULL);
	for (i = 0, j = 0; j < ac; j++)
	{
		for (k = 0;; k++)
		{
			if (av[j][k] == '\0')
			{
				st[i] = '\n';
				break;
			}
			st[i] = av[j][k];
			i++;
		}
	}
	st[i] = '\0';
	return (st);
}
