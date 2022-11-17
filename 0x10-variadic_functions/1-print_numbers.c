#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers
 *@separator: string that will be used to separate each number
 *@n: fixed variable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i != (n - 1))
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
