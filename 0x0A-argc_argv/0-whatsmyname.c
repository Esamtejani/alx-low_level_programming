#include <stdio.h>

/**
 * main - prints the program name.
 * @argc: this the number of arguments
 * @argv: this the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
