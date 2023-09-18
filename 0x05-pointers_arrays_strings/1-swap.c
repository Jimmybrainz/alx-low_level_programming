#include "main.h"

/**
 * swap_int - function to swaps the values of two integers
 * @a: First parameter to be swapped
 * @b: Second parameter to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
