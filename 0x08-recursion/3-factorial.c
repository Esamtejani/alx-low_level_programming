#include "main.h"

/**
 * factorial - gets factorial of n
 * @n: integer
 *
 * Return: if there is success 1.
 * if there is an  error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

