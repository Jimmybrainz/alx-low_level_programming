#include "main.h"

/**
 * _isalpha - function to check for alphabetic character
 * @c: Parameter to check
 * Return: Returns 1 if it is an alphabetic character else Return 0
 */

int _isalpha(int c)
{
	int x, y;

	for (x = 97; x <= 122; x++)
	{
		if (c == x)
		{
			return (1);
		}
	}	


	for  (y = 65; y <= 90; y++)
	{
		if (c == y)
		{
			return (1);

		}

	}
	return (0);
}
