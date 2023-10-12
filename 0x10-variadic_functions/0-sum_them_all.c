#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: number of variables
 *Return: sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, total = 0;
	va_list mynumbers;

	if (n == 0)
		return (0);

	va_start(mynumbers, n);

	for (x = 0; x < n; x++)
	{
		total += va_arg(mynumbers, int);
	}
	va_end(mynumbers);

	return (total);

}
