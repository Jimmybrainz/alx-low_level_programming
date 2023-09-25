#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *@s: pointer to a character array
 *@c: character to search for
 *Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			/*Found the character, return it's address*/
			return (s);
		}
		if (c == '\0')
		{
			return (s);
		}
		else
			/*Character not found*/
			return (NULL);
	}
}
