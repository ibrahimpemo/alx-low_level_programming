#include<unistd.h>

/**
 * main - Entry point
 *
 * Description: UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
 *
 * Return: 1
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
