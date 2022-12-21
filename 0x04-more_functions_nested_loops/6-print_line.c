#include "main.h"

/**
 * print_line - prints straight line of characters
 * @n: number of times to print
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
