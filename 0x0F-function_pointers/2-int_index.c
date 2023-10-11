#include "funtion_pointers.h"

/**
 *int_index - function that searches for an integer
 *@array: array provided
 *@size: size of array
 *@cmp: function pointer
 *Return: the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (y = 0; y < size; y++)
	{
		if (cmp(array[y]) == 1)
			return (y);
	}
	return (-1);
}
