#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_all - prints all arguments regardless of type
 *@format: is lait of the types of arguments passed
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list p;
	char *s;
	float f;

	va_start(p, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(p, int));
			break;
		case 'i':
			printf("%d", va_arg(p, int));
			break;
		case 's':
			s = va_arg(p, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		case 'f':
			printf("%f", va_arg(p, double));
		}
		switch (format[i + 1])
		{
		case 'c':
		case 'i':
		case 's':
		case 'f':
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
