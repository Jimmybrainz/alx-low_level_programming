#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 * without the standard function
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
		_putchar('\n');

	}
}
