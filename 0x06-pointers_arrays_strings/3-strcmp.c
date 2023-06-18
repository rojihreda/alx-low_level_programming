#include"main.h"

/**
 * _strcmp - function to compares tow strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: equal1
 */

int _strcmp(char *s1, char *s2)
{
	int equal1 = 0;

	while (*s1)
	{

		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal1);
}
