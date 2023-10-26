#include "main.h"

/**
 *clear_bit - sets the value of the bit at a given index to 0
 *@n: A pointer to the number in which to clear the bit
 *@index: the index of the bit to clear
 *Return: 1 if the operation was successful, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*check if the index if greater than the number of bits*/
	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}

	/*clear the bit at the given index*/
	*n &= ~(1UL << index);

	return (1);
}
