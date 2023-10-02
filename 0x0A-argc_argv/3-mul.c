#include <stdio.h>
#include <stdlib.h>

/**
 * main - the multiplies two numbers.
 * @argc:the  number of arguments
 * @argv:the  array of arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		return (0);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
