#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase upper change all case 
 * @n: pointer pointer 
 *
 * Return: n return 0
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
