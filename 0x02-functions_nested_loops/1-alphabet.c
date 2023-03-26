#include "main.h"
/**
 * main - check the code
 * alphabet function fot print letter alphabet.
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
