#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabets, in lowercase, followed by a new line"
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (0 < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
