#include "main.h"
/**
 * _strchr - main file
 * @s: input string
 * @c: input charcter
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int e;

	for (e = 0; s[e] >= '\0'; e++)
	{
		if (s[e] == c)
		{
			return (&s[e]);
		}
	}
	return (0);
}
