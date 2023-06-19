#include"main.h"

/**
 * _strchr - function to locates a character in a string
 * @s: char
 * @c: char
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}

	return ('\0');
}
