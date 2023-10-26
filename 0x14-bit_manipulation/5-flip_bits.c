#include "main.h"

/**
 *flip_bits - Returns the number of bits that need to be flipped
 *to transform one number into another
 *@n: the first number
 *@m: the second number
 *Return: the number of bits that need to be flipped to transform 'n' into 'm'
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_val = n ^ m;
	unsigned int count = 0;

	while (xor_val)
	{
		count += xor_val & 1;
		xor_val >>= 1;
	}

	return (count);
}
