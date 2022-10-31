#include <stdlib.h>
/**
 *infinite_add - adds two numbers and stores the result in a buffer string
 *@n1: first number
 *@n2: second number
 *@r: buffer
 *@size_r: size of buffer
 *Return: returns buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sn1 = 0, sn2 = 0, sres = 0, tens = 0, sum, i, j, ss;
	char res[] = "";
	char *nuarr, *pres;

	while (n1[sn1])
	{
		sn1++;
	}
	while (n2[sn2])
	{
		sn2++;
	}
	if (sn1 > sn2)
	{
		nuarr = malloc((sn1 +1) * sizeof(char));
		for (i = 0, j = sn1 - sn2; i < sn1 + 1; i++)
		{
			if (i < j)
				nuarr[i] = '0';
			else
				nuarr[i] = n2[i - j];
		}
		ss = sn1;
	}
	else if (sn2 > sn1)
	{
		nuarr = malloc((sn2 + 1) * sizeof(char));
		for (i = 0, j = sn2 - sn1; i < sn2 + 1; i++)
		{
			if (i < j)
				nuarr[i] = '0';
			else
				nuarr[i] = n1[i - j];
		}
		ss = sn2;
	}
	else
		nuarr = n2;
	pres = res;
	for (i = ss - 1; i >= 0; i--, pres++)
	{
		sum = tens + (n1[i] - '0') + (nuarr[i] - '0');
		*pres = (sum % 10) + '0';;
		tens = sum / 10;
		if (i == 0 && tens > 0)
			*++pres = tens + '0';
	}
	*++pres = '\0';
	while (res[sres])
		sres++;
	if (sres + 1 > size_r)
		return (0);
	else
	{
		for (i = sres - 1, j = 0; i >= 0; i--, j++)
		{
			r[j] = res[i];
		}
		r[++j] = '\0';
		return (r);
	}
}
