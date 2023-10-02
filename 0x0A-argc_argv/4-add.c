#include <stdio.h>

/**
 * _atoi -itis function  converts a string to an integer
 * @s:the string to be  string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, num, e, s, m;

	sum = 0;

	for (e = 1; e < argc; e++)
	{
		for (s = 0; argv[e][s] != '\0'; s++)
		{
			if (argv[e][s] > '9' || argv[e][s] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (m = 1; m < argc; m++)
	{
		num = _atoi(argv[m]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
