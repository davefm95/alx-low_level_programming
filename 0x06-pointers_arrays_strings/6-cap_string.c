/**
 *cap_string - capitalizes first letter ocf each word in string
 *@s: string to be capped
 *Return: return capped string
 */
char *cap_string(char *s)
{
	int i, sprt = 0, j, issprt;
	char sprtarr[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i]; i++)
	{
		issprt = 0;
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sprtarr[j])
			{
				sprt++;
				issprt++;
				break;
			}
		}
		if (issprt > 0)
			continue;
		if (sprt == 0 && i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		else if (sprt > 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			sprt = 0;
		}
	}
	return (s);
}
