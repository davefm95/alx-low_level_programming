#include "main.h"
/**
 *puts2 - prints every other character in a string
 *@str: string pointer variable
 */
void puts2(char *str)
{
	int i;
	int sl;
	char c;

	c = *str;
	sl = 0;
	while (c)
	{
		sl++;
		c = *(str + sl);
	}
	for (i = 0; i < sl; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
