#include"main.h"

/**
 * main - Entry point
 *
 * Description:  islower
 *
 * Return: 1
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
