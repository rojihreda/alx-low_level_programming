#include "main.h"

/**
 *  _sqrt_recrsion - function to return natural square root of number
 * @n: number
 * @val: squal root
 * Return: int
 */

int square(int n, int val);
int _sqrt_recrsion(int n)
{
	return (square(n, 1));
}

/**
 * square - find sqaure root
 * @n: int to find square root
 * @val: squal root
 * Return: int
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
}
