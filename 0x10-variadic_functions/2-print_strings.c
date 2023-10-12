#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - function that prints strings, followed by a new line
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list mychars;

	va_start(mychars, n);

	for (x = 0; x < n; x++)
	{
		const char *str = va_arg(mychars, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (x < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(mychars);

	printf("\n");
}
