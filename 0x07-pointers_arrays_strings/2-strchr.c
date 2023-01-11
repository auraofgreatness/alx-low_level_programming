#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: In the string.
 * @c: occurrence of the character.
 * Return: If c is found - a pointer to the first occurence.
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return ('\0');
}
