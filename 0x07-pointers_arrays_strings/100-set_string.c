#include "main.h"

/**
 *set_string - function that sets the value of a pointer to a char
 *@s: the pointer to be changed
 *@to: character to be changed to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
