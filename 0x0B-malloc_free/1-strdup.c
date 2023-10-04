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
	char *copy;
	int i, le = 0;

	if (str == NULL)
		return (NULL);

	while (str[le] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * le) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < le; i++)
		copy[i] = str[i];
	copy[le] = '\0';

	return (copy);
}
