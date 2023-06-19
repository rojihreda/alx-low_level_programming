#include"main.h"
#include<ctype.h>

/**
 * _isalpha - function for checks alphabet character
 *
 * @c: checks input
 *
 * Return: return 1 if 'c' is a letter, lowercase or uppercase
 * return 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
