#include <stdio.h>

/**
 * main - prints the program name.
 * @argc:this the  number of arguments
 * @argv:this the  array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
