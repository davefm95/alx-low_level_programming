/**
 *_strspn - gets the length of a prefix substring.
 *@s: sring to be checked
 *@accept: control string
 *Return: returns length of string prefix of s which contains chars in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, isinaccept;

	while (s[i])
	{
		j = 0;
		isinaccept = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				isinaccept++;
				break;
			}
			j++;
		}
		if (isinaccept)
		{
			i++;
			continue;
		}
		break;
	}
	return (i);
}
