#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: Parameter to check
 * Return: Return 1 if lower else return 0
 */

int _islower(int c)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		if (c == x)
		{
			return (1);
		}
	}
	return (0);
}
