#include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @e: same number as n
 * @s: number that iterates from 1 to n
 *
 * Return:if there is  success 1.
 * if there is an  error, -1 is returned, and errno is set appropriately.
 */
int sqrt2(int e, int s)
{
	if (s * s == e)
		return (s);
	else if (s * s > e)
		return (-1);
	return (sqrt2(e, s + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: if thre is  success 1.
 * if there is an  error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
