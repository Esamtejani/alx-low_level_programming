#include "main.h"

/**
 * prime2 - Makes possible to evaluate from 1 to n
 * @e: same number as n
 * @s: number that iterates from 1 to n
 *
 * Return: if there is  success 1.
 * if there is an  error, -1 is returned, and errno is set appropriately.
 */
int prime2(int e, int s)
{
	if (e == s)
		return (1);
	else if (e % s == 0)
		return (0);
	return (prime2(e, s + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: if there is  success 1.
 * if ther si an error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
