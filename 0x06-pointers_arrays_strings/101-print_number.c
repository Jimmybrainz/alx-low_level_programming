#include "main.h"

/**
 * print_number - prints an integer using _putchar
 *@n: The integer to be printed
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-'); /*print minus sign for negative numbers */
		n = -n; /* make n positive */
	}

	if (n / 10 != 0)
	{
		print_number(n / 10); /* Recursively print the remaining digits */
	}

	_putchar('0' + (n % 10)); /* Print the last digit */
}
