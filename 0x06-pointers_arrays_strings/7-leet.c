/**
 *leet - encodes a string into 1337
 *@s: string to be encoded
 *Return: returns encoded string
 */
char *leet(char *s)
{
	int i, j;
	char c[] = {'a', 'e', 'o', 't', 'l'};
	int l[] = {4, 3, 0, 7, 1};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == c[j] || s[i] == c[j] - 32)
				s[i] = l[j] + '0';
		}
	}
	return (s);
}
