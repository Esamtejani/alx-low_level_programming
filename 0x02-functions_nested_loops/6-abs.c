#include "main.h"
#include <stdio.h>

/**
 * _abs - absolute value of int
 *
 * @r: variable in use
 * Return: Always 0(Success)
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (r * (-1));
	}

	else if (r == 0)
	{
		return (0);
	}

	else
	{
		return (r);
	}
}
