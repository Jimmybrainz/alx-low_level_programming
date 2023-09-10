#include <stdio.h>

/**
 * main - A program that prints the lowercase alphabet in reverse
 * Return: 0(success)
 */

int main(void)
{
	int y;

	for (y = 122; y >= 97; y--)
	{
		putchar(y);
	}
	putchar('\n');


	return (0);
}
