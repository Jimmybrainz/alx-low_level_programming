#include "main.h"

/**
 * puts_half - function to print half of a string
 *@str: string to be halved
 */

void puts_half(char *str)
{
	int n, len;

	len = 0;

	/*calculate the length of string*/
	while (str[len] != 0)
	{
		len++;
	}
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
		n = len / 2;
	for (n = len - n; n < len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
