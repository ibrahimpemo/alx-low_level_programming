#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet
 *
 * Return: 0
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
