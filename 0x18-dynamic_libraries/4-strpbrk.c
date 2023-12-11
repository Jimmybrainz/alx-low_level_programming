#include "main.h"

/**
 * _strpbrk -  function that searches a string for any of a set of bytes.
 * @s: input string
 * @accept: input string
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	/* loop through the characters in s */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* for each character in s, loop through characters in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* compare characters in s and accept */
			if (s[i] == accept[j])
			{
				return (&s[i]); /* return pointer to the matched character in s */
			}
		}
	}
	return ('\0'); /* return NULL if no match is found */
}
