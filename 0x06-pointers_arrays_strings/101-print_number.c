#include "main.h"

/**
 * print_number - prints an integer using _putchar
 *@n: The integer to be printed
*/

void print_number(int n)
{
	unsigned int num;

	/* check if number is negative */
	if (n < 0)
	{
		num = -n;
		_putchar('-'); /*print minus sign for negative numbers */
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(n / 10); /* Recursively print the remaining digits */
	}

	_putchar('0' + (n % 10)); /* Print the last digit */
}
