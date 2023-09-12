#include "main.h"
/**
 * times_table - function to print 9 times table
 */
void times_table(void)
{
	int multiplier, x, result, tens, units;

	for (multiplier = 0; multiplier < 10; multiplier++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (x = 1; x < 10; x++)
		{
			result = multiplier * x;
			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + 48);


			}
			else
			{
				tens = result / 10;
				units = result % 10;
				_putchar(tens + 48);
				_putchar(units + 48);

			}
			if (x < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
