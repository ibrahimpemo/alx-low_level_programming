#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Smile in the mirror
 *
 * Return: 0
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}
