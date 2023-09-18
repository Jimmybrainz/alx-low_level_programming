#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *@str: string to print from
 */

void puts2(char *str)
{
	int len = 0;
	int x;

	/*calculate lenth of string*/
	while (str[len] != '\0')
		len++;

	/*print every other character*/
	for (x = 0; x < len; x = x + 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
