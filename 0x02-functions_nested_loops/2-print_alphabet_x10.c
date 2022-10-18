#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i < 11; i++)
	{
		char ch = 'a';

		for (j = 1; j < 27; j++)
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
