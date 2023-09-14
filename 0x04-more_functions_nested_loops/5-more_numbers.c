#include "main.h"

/**
 * more_numbers - function to print 10 times the numbers, from 0 to 14
 * Return: 0(success)
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
		}
	_putchar('\n');
	}
}
