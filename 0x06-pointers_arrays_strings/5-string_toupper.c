/**
 *string_toupper - changes lowercaae character to uppercaae
 *@s: string to be modified
 *Return: returns modified string
 */
char *string_toupper(char *s)
{
	int i, c;
	char ch;

	for (i = 0; s[i]; i++)
	{
		c = s[i];
		if (c >= 97 && c <= 122)
		{
			c -= 32;
			ch = c;
			s[i] = ch;
		}
	}
	return (s);
}
