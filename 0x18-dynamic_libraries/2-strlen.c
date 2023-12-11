#include "main.h"

/**
 * _strlen - function to return the length of a string
 * @s: Parameter to return it's length
 * Return: the lenth of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
