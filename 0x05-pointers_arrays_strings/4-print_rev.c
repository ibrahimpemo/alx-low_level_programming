#include "main.h"
/**
 * print_rev - prints a string, in reverse.
 * @s: Input string.
*/
void print_rev(char *s)
{
	int x, length;

	length = strlen(s);

	for (x = length - 1 ; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
