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

	va_start(p, format);
	while (format[i])
	{
		j = 0;
		switch (format[i])
		{
		case 'c' :
			printf("%c", va_arg(p, char));
			break;
		case 'i' :
			printf("%d", va_arg(p, int));
			break;
		case 's' :
			s = va_args(p, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		case 'f' :
			printf("%f", va_arg(p, float));
		}
		while (j < 4)
		{
			if (format[i + 1] == far[j])
			{
				printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
