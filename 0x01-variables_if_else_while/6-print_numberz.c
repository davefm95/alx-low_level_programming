#include <stdio.h>
/**
 *main - prints the numbers 0-9 using putchar()
 *
 *Return: returns 0 when done
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
