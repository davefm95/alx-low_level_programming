/**
 *rot13 - encodes a string using rot13
 *@s: string to be encoded
 *Return: returns encoded string
 */
char *rot13(char *s)
{
	int i;
	char a;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = s[i]; (a > 64 && a < 91) || (a > 96 && a < 123);)
		{
			a = a - 13;
			s[i] = a;
			if ((s[i] < 97 && s[i] >= 84)  || s[i] < 65)
				s[i] = a + 26;
			break;
		}
	}
	return (s);
}
