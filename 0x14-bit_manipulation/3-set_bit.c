#include "main.h"

/**
 *set_bit - sets the value of the bit at a given index to 1
 *@n: A pointer to the number in which to set the bit
 *@index: The index of the bit to set
 *Return: 1 if the operation was successful, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/*check if the index is greater than the number of bits*/
	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}

	/*set the bit at the given index*/
	*n |= 1UL << index;

	return (1);
}
