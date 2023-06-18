#include"main.h"

/**
 * _memset - function to fills memory with a constant byte
 *
 * @s: char
 * @b: char
 * @n: int
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0, itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
