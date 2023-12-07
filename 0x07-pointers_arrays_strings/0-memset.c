#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @b: starting address of memory to be filled
 * @s: the desired value column
 * @n: number of bytes to be changed
 * Return: chanaged aray with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int e;

	for (e = 0; n > 0; e++)
	{
		s[e] = b;
		n--;
	}
	return (s);
}
