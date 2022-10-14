#include <stdio.h>
/**
 *main - prints letters of alphabet in lowercase and uppercase
 *
 *Return: returns 0 upon completion
 */
int main(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	for (; i < 52 ; i++)
		putchar(a[i]);
	putchar('\n');
	return (0);
}
