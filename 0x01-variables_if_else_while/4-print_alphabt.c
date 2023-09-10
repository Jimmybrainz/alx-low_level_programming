#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 * except q and e
 * Return: 0(success)
 */

int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
	if (a != 'e' && a != 'q')

	putchar(a);

	}

	putchar('\n');

	return (0);
}
