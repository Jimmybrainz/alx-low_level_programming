#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - function that prints anything
 *@format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *str;
	unsigned int i = 0;
	int num;
	char c;
	float f;
	va_list mychars;

	va_start(mychars, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			c = va_arg(mychars, int);
			printf("%c", c);
			break;
		case 'i':
			num = va_arg(mychars, int);
			printf("%i", num);
			break;
		case 'f':
			f = va_arg(mychars, double);
			printf("%f", f);
			break;
		case 's':
			str = va_arg(mychars, char*);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		default:
			i++;
			continue;	}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(mychars);
	printf("\n");
}
