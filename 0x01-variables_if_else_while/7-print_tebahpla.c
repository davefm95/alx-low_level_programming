#include <stdio.h>
/**
 *main - prints the alphabet backwards in lowercase
 *
 *Return: returns 0 upon completion
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}
