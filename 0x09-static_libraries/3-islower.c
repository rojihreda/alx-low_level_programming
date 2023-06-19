#include"main.h"
#include <ctype.h>

/**
 * _islower - function to checks for lowercase character
 *
 * @c: check input
 *
 * Return: return 1 if 'c' is lowercase otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
