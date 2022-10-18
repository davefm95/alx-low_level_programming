#include "main.h"
/**
 *main - Prints _putchar
 *
 *Return: returns 0 upon completion
 */
int main(void)
{
	int i;
	char pc[] = "_putchar\n";

	for (i = 0; i < 9; i++)
		_putchar(pc[i]);
	return (0);
}
