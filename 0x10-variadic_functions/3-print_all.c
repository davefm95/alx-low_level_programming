#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *print_all - prints all arguments regardless of type
 *@format: is lait of the types of arguments passed
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list p;
	char *s;
	char far[] = {'c', 'i', 's', 'f'};
	float f;

	va_start(p, format);
	while (format[i])
	{
		j = 0;
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
			f = (float)va_arg(p, double);
			printf("%f", f);
		}
		while (j < 4)
		{
			if (format[i + 1] == far[j])
				printf(", ");
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
