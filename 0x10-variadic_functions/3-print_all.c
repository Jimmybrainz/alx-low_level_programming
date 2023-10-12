#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - function that prints anything
 *@format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...);

void print_all(const char * const format, ...)
{
	char *s;
	int i = 0;
	char c;
	float f;
	const char *format_ptr = format;
	int is_first = 1;
	va_list mychars;

	va_start(mychars, format);

	while (*format_ptr)
	{
		if (*format_ptr == 'c')
		{
			c = (char) va_arg(mychars, int);
			if (!is_first)
			{
				printf(", ");
			}
			printf("%c", c);
		}
		else if (*format_ptr == 'i')
		{
			i = va_arg(mychars, int);
			if (!is_first)
			{
				printf(", ");
			}
			printf("%d", i);
		}
		else if (*format_ptr == 'f')
		{
			f = va_arg(mychars, double);
			{
				if (!is_first)
				{
					printf(", ");
				}
			}
			printf("%f", f);
		}
		else if (*format_ptr == 's')
		{
			s = va_arg(mychars, char *);
			{
				printf(", ");
			}
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		format_ptr++;
		is_first = 0;
	}
	printf("\n");

	va_end(mychars);
}
