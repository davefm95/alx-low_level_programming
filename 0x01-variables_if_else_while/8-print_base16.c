#include <stdio.h>
/**
 *main - prints the numbers of base 16 in lowercase
 *
 *Return: returns 0 when done
 */
int main(void)
{
	int i;
	int ascod;

	for (i = 0, ascod = 48; i < 16; i++)
	{
		putchar(ascod);
		if (i == 9)
		{
			ascod = 97;
			continue;
		}
		ascod++;
	}
	putchar('\n');
	return (0);
}
