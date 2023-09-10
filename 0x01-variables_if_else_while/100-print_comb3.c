#include <stdio.h>

/**
 * main - A program that prints all possible different combinations of
 * two digits Numbers must be separated by , followed by a space
 * The two digits must be different
 * Return: 0(success)
 */

int main(void)
{
	int x, y;

	for (x = '0'; x <= '8'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);
		if (!(x == '8' && y == '9'))
		{

		putchar(44);
		putchar(32);

		}

		}
	}

	putchar('\n');

	return (0);

}
