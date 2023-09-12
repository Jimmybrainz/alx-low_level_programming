#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 * @n:  Parameter to check
 * Return: Returns the value of the last digit
 */

int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	{
		digit = -1 * (n % 10);
		_putchar(digit + 48);
	}

	else
	{
		digit = n % 10;
		_putchar(digit + 48);
	}
	return (digit);
}
