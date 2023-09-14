#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10x
 *
 * Return: Always 0(Success)
 */

void print_alphabet_x10(void)
{
	int letter;
	int count;

	count = 0;
	while (count < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	count++;
	_putchar('\n');
	}
}
