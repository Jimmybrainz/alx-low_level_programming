#include <stdio.h>

/**
 * main - A program tprogram that prints all
 * the numbers of base 16 in lowercase
 * Return: 0(success)
 */

int main(void)
{
	int n;
	int a;

	for (n = 0; n <= 9; n++)
	{

	putchar(n + '0');

	}

	for (a = 'a'; a <= 'f'; a++)
	{

	putchar(a);

	}

	putchar('\n');

	return (0);

}
