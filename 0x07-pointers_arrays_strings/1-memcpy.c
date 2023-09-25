#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored variable
 * @src: memory where is copied varible
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int e;

	for (e = n; r < e; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
