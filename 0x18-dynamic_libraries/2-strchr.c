#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *@s: pointer to a character array
 *@c: character to search for
 *Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		if (s[len] == c)
		{
			/*Found the character, return it's address*/
			return (s + len);
		}
	}
	if (s[len] == c)
	{
		return (s + len);
	}
	else
	/*Character not found*/
	return (NULL);
}
