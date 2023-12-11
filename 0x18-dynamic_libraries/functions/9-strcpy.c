#include "main.h"

/**
 * _strcpy - function to clone strcpy()
 * @dest: destination
 * @src: source
 * Return: the point to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (p);
}
