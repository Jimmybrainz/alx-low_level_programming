#include "main.h"
/**
 * print_line - function to draw a straight line in the terminal
 * @n: arugument representing the number of line drawn
 * Return: 0(success)
 */

void print_line(int n)
{
	int x = 0;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	while (x < n)
	{
		_putchar(95);
		x++;

	}
}
