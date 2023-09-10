#include <stdio.h>

/**
 * main - A program that prints alphatbets in lowercase
 * and then in uppercase
 * Return: 0(success)
 */

int main(void)
{
	int a;
	int b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}

