#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints output to stderr
 *
 *Return: 1
 */
int main(void)
{
	char st[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int size = sizeof(st);

	fwrite(st, 1, size, stderr);
	exit(1);
}
