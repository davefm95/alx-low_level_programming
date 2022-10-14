#include <stdio.h>
/**
 *main - prints all letters of alphabet except e and q
 *
 *Return: returns 0 upon completion
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if ((i == 4) || (i == 16))
			continue;
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
