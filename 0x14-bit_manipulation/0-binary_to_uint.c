#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: A pointer to a string containing '0's and '1's
 *Return: The unsigned integer representation of the binary number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	/*check if b is NULL*/
	if (b == NULL)
	{
		return (0);
	}
	/*check if all characters are either '0' or '1'*/
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	/*convert binary to unsigned int*/
	for (i = 0; b[i] != '\0'; i++)
	{
		num = (num << 1) | (b[i] - '0');
	}

	return (num);
}
