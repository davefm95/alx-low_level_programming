/**
 *rev_string - reverses a string
 *@s: string pointer variable
 */
void rev_string(char *s)
{
	int sl;
	int i;
	int j;
	int k;
	char ch;
	char *rev;
	char cho;

	sl = 0;
	ch = *s;
	rev = s;
	while (ch)
	{
		sl++;
		ch = *(s + sl);
	}
	for (i = 0, j = sl - 1, k = 0; i < sl / 2; i++, j--, k++)
	{
		cho = *(rev + j);
		*(rev + j) = *(s + k);
		*(s + k) = cho;
	}

}
