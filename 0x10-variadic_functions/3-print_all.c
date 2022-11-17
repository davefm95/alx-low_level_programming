#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_all - prints all arguments regardless of type
 *@format: is lait of the types of arguments passed
 */
void print_all(const char * const format, ...)
{
	int i = 0, fswitch = 0, j;
	va_list p;
	char *s, far[] = {'c', 'i', 's', 'f'};

	va_start(p, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (fswitch && format[i] == far[j])
				printf(", ");
			j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(p, int)), fswitch++;
			break;
		case 'i':
			printf("%d", va_arg(p, int)), fswitch++;
			break;
		case 's':
			s = va_arg(p, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s), fswitch++;
			break;
		case 'f':
			printf("%f", va_arg(p, double)), fswitch++;
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
