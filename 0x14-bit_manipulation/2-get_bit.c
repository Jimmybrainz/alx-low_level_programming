#include "main.h"

/**
 *get_bit - Returns the value of the bit at a given index
 *@n: The number from which to get the bit
 *@index: The index of the bit to get
 *Return: The value of the bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/*check if the index is greater than the number of bits in an unsigned int*/
	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}

	/*Get the bit at the given index*/
	return ((n >> index) & 1);
}
