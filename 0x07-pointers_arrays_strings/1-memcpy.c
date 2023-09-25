#include "main.h"

/**
 * _memcpy - function that copies memory area
 *@dest: memory area to copy from
 *@src: memory area to copy to
 *@n: number of bytes to be filled
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}
	return (dest);
}
