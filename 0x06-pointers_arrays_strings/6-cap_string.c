#include "main.h"
#include <stdio.h>

/**
 * isLower - function to changes all lowercase letters of a string to uppercase
 *
 * @c: characters
 *
 * Return:1 if true 0 is false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - deternines whether ascii is a deliniter
 * @c: character
 * Return: 1 if true 0 if false
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n, .!?\"()()";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalalizes all word of a string
 * @s: input string
 * Return: string with capitalized word
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
