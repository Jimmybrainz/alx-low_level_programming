#include "main.h"
/**
 * print_line - function to draw a straight line in the terminal
 * @n: arugument representing the number of line drawn
 * Return: 0(success)
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		_putchar(95);
		_putchar('\n');
	}
}
