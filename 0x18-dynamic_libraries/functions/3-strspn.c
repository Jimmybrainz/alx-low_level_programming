#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: string to be scanned
 * @accept: string containing characters to be matached
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
/* initializes a counter to keep track of the number of matching characters. */
	unsigned int count = 0;
	int i, j;

/* loop through string s until it hits NULL character or space */
	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
	{
/* loop over string accept until it hits NUll character */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j]) /* check for match between s and accept */
			{
				count++; /* count incremented */
/* break loop, move to next character in s when matching character is found */
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (count);
}
