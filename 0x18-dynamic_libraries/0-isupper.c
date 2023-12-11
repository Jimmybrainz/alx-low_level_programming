#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Parameter to check
 * Return: Returns 1 if it is an uppercase character else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);
}
