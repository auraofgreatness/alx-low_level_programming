#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @b.
 * @s: A pointer to the memory area to be filled.
 * @b: The memory area pointer.
 * @n: Bytes of the memory area pointed to by @s.
 * Return: A pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	unsigned char *memory = s, value = b;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
