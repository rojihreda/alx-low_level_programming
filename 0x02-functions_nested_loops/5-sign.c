#include"main.h"
#include<ctype.h>
/**
 * print_sign - function to print sign of a number
 *
 * @n: checks input from function
 *
 * Return: returns 1 and prints '+' if 'n' is greater than zero
 *  returns 0 and prints 0 if 'n' is zero
 *   returns -1 and prints '-' if 'n' is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}

	else
	{
		_putchar('-');

		return (-1);
	}
}
