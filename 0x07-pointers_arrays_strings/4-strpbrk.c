#include"main.h"

/**
 * _strpbrk - function to searches a string for any of a set of bytes
 * @s: char
 * @accept: char
 * Return: p ot 1
 */

char *strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;

		while (accept[jtr] != '\0')
		{

			if (accept[jtr] == s[itr])
			{

				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}

	return (0);
}
