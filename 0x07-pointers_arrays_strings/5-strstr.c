#include "main.h"
/**
 * _strstr - Entry point
 * @aystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *aystack, char *needle)
{
	for (; *aystack != '\0'; aystack++)
	{
		char *l = aystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (aystack);
	}

	return (0);
}
