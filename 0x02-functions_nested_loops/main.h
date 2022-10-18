#include "_putchar.c"
int _putchar(char c);
int pc(void);
int pc(void)
{
        int i;
        char pc[] = "_putchar\n";
	for (i = 0; i < 9; i++)
		_putchar(pc[i]);
        return (0);
}
