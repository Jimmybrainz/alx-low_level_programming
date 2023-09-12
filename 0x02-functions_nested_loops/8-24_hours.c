#include "main.h"
/**
 * jack_bauer - Function that prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int hh, mm;

	for (hh = 0; hh <= 23; hh++)
	{
		for (mm = 0; mm <= 59; mm++)
		{
		_putchar(hh / 10 + 48);
		_putchar(hh % 10 + 48);
		_putchar(58);
		_putchar(mm / 10 + 48);
		_putchar(mm % 10 + 48);
		_putchar('\n');

		}
	}
}
