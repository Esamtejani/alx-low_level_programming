#include "main.h"

/**
 * palind2 - obtains length of a
 * @e: string
 * @l: integer to count length
 *
 * Return: if there is  success 1.
 * if ther is an  error, -1 is returned, and errno is set appropriately.
 */
int palind2(char *e, int l)
{
	if (*e == 0)
		return (l - 1);
	return (palind2(e + 1, l + 1));
}
/**
 * palind3 - compares string vs string reverse
 * @e: string
 * @l: length
 *
 * Return: if there is  success 1.
 * if there si an r, -1 is returned, and errno is set appropriately.
 */

int palind3(char *e, int l)
{
	if (*e != *(e + l))
		return (0);
	else if (*e == 0)
		return (1);
	return (palind3(e + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: if there is  success 1.
 * if there si an  error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
