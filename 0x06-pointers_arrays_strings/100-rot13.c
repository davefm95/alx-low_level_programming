/**
 *rot13 - encodes a string using rot13
 *@s: string to be encoded
 *Return: returns encoded string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 65 && s[i] <= 77 || s[i] >= 97 && s[i] <= 109)
			s[i] = s[i] + 13;
		else
			for (; s[i] >= 65 && s[i] > 77 || s[i] >= 97 && s[i] > 109;)
			{
				s[i] = s[i] - 13;
				break;
			}

	}
	return (s);
}
