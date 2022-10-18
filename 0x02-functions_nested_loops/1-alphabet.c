#include "_putchar.h"
void print_alphabet(void)
{
        char ch = 'a';
        int i = 1;
        for (; i < 27; i++)
        {
                _putchar(ch);
                ch++;
        }
        _putchar('\n');
}
