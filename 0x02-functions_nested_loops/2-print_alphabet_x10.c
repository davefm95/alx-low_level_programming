/**
 *print_alphabet_x10 - prints the alphabet 10 times
 *_putchar - writes out characters
 *@c: a character argument
 *Return: returns 1 if successful an -1 if not
 */
int _putchar(char c);
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
