#include "main.h"
#include <stdlib.h>

/**
 * _strdup a function that - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str:it is variable the source string
 *
 * Return:the  returns a pointer to the duplicated string.
 * and It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *m;
	int i, szie = 0;

	if (str == NULL)
		return (NULL);

	while (str[szie] != '\0')
		szie++;

	m = (char *)malloc((sizeof(char) * le) + 1);
	if (m == NULL)
		return (NULL);

	for (i = 0; i < szie; i++)
		copy[i] = str[i];
	m[szie] = '\0';

	return (m);
}
