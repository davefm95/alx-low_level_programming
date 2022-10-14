#include <stdio.h>
#include <string.h>
/**
 *main - prints the alphabets from a - z
 *
 *Return: returns 0 upon completion
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < strlen(alpha))
	{
		putchar(alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
