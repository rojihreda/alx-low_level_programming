#include "main.h"
void print_alphabet(void);
/**
 * main - check the code
 * alphabet function fot print letter alphabet.
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
