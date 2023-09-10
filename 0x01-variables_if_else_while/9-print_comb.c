#include <stdio.h>

/**
 * main - A program that prints all possible combinations
 * of single-digit numbers using putchar
 * Return: 0(success)
*/

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);

		if (n <= 56)

		putchar(44);
		putchar(32);

	}

		putchar('\n');

	return (0);

}

