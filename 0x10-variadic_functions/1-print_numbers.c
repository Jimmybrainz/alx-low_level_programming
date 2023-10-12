#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - function that prints numbers, followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;

	va_list mynumbers; /*Hold the variable arguments*/

	va_start(mynumbers, n); /*Initialize the va_list*/

	for (x = 0; x < n; x++)
	{
		/*Get the next integer from the va_list*/
		int total = va_arg(mynumbers, int);

		printf("%d", total); /*Print the integer*/

		if (x < n - 1 && separator != NULL)
		{
			/*Print the seperator if not the last number*/
			printf("%s", separator);
		}
	}
	va_end(mynumbers); /*Clean up the va_list*/
	printf("\n"); /*Print a new line at the end*/

}
