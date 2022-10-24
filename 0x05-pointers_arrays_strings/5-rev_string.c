/**
 *rev_string - reverses a string
 *@s: string pointer variable
 */
void rev_string(char *s)
{
	int sl;
	int i;
	char ch;
	char *rev;
	int j;

	sl = 0;
	ch = *s;
	rev = s;
	while (ch)
	{
		sl++;
		ch = *(s + sl);
	}
	for (i = sl - 1, j = 0; i >= -1; i--, j++)
	{
		if (i == -1)
			*(rev + j) = '\0';
		else
		{
			*(rev + j) = *(s + i);
		}
	}
	s = rev;
}
