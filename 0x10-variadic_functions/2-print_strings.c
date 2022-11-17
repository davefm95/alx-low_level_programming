#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - prints string arguments followed by a new line
 *@separator: string that separates each arg when printing
 *@n: number of args and last fixed var
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i != n - 1)
			printf("%s ", separator == NULL ? "" : separator);
	}
	printf("\n");
}
