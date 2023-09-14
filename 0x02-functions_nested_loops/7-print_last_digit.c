#include "main.h"

/**
 * print_last_digit - prints last #
 *
 * @r: variable in use
 * Return: Always 0
 */

int print_last_digit(int r)
{
	int last_digit;

	if (r < 0)
	{
		last_digit = (-1 * (r % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}

	else
	{
		last_digit = (r % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
