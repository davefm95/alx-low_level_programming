#include "main.h"
/**
 *print_rev - prints a string in reverse
 *@s: string pointer variable
 */
void print_rev(char *s)
{
	int ch;
	int i;
	int sl;

	ch = *s;
	sl = 0;
	while (ch)
	{
		sl++;
		ch = *(s + sl);
	}
	for (i = sl; i >= 0; i--)
		_putchar(*(s + i));
}
