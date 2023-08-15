#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: When I was having that alphabet soup, I never thought that it would pay off
 *
 * Return: 0
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
