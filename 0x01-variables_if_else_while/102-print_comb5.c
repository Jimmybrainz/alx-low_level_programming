#include <stdio.h>

/**
 * main - A program that prints all possible combinations of
 * two digits Numbers and should range from 0 to 99
 * Return: 0(success)
 */

int main(void)
{
	int x, y;

	for (x = '0'; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{

				putchar(x / 10);
				putchar(x % 10);
				putchar(32);
				putchar(y / 10);
				putchar(y % 10);

		if (x == 98 && y == 99)
			continue;


		putchar(44);
		putchar(32);

		}
	}

	putchar('\n');

	return (0);

}
