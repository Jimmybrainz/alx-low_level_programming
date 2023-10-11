#include "function_pointers.h"

/**
 *array_iterator - function that executes a function given as
 *a parameter on each element of an array
 *@array: array passed
 *@action: function pointer
 *@size: size of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
