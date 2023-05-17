#include"main.h"

/**
 * print_to_98 - function to print numbers from 0 to 98
 *
 * @n: number
 *
 * Return: return 'n'
 *
 */

void print_to_98(int n)
{
	int x;

	if (n > 98)
		for (x = n; x > 98; x--)
			printf("%d, ", x);
	else
		for (x = n; x < 98; x++)
			printf("%d, ", x);
	printf ("98 \n");
}
