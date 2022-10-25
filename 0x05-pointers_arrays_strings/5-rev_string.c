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
	char *tmp;

	sl = 0;
	ch = *s;
	rev = s;
	tmp = s;
	while (ch)
	{
		sl++;
		ch = *(s + sl);
	}
	for (i = sl - 1; i >= 0; i--, tmp++)
	{
		tmp = (rev + i);
	}
	s = tmp;
}
