#include "main.h"
/**
 * times_table - function to print 9 times table
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			if (z > 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(z + '0');
			}

		}

			_putchar('\n');
	}
}
