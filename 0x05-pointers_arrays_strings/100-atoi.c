/**
 *_atoi - converts strings to numbers
 *@s: string pointee variable
 *Return: returns number else returns 0
 */
int _atoi(char *s)
{
	int i;
	int sl;
	char ch;
	int numc;
	int pn;
	int charno;
	int no;
	int compno;
	int tenp;

	sl = 0;
	compno = 0;
	tenp = 1;
	while (*(s + sl))
		sl++;
	for (i = 0; i < sl - 1; i++)
	{
		ch = *(s + i);
		if (ch == '-')
			pn++;
		if (ch >= '0' && ch <= '9')
		{
			numc++;
			continue;
		}
		if (numc > 0)
		{
			for (; numc > 1; numc++)
				tenp *= 10;
			for (; numc > 0; numc--, tenp /= 10)
			{
				charno = *(s + (i - numc)) - '0';
				no = charno * tenp;
				compno += no;
			}
			if (pn % 2 != 0)
				compno = -compno;
		}
	}
	return (compno);
}
