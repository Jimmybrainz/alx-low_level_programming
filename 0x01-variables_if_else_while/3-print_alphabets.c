#include <stdio.h>

/**
 * main - A program that prints alphatbets in lowercase
 * Return: 0(success)
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		putchar('\n');
	}

	return (0);
}

