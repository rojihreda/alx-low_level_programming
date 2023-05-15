#include"main.h"

/**
 * jack_bauer - function to print min of the day
 *
 * Return: always 0
 *
 */

void jack_bauer(void)
{
	int hour;

	for (hour = 0; hour < 24; hour++)
	{
		int min;

		for (min = 0; min < 60; min++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
