#include "main.h"
/**
 *puts_half - printds half of a string
 *@str: string pointer variable
 */
void puts_half(char *str)
{
	int i;
	int sl;
	char c;
	int hl;

	sl = 0;
	c = *str;
	while (c)
	{
		sl++;
		c = *(str + sl);
	}
	if (sl % 2 == 0)
		hl = sl / 2;
	else
		hl = sl / 2 + 1;
	for (i = hl; i < sl; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
