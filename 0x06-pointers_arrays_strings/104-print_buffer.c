#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer-buffer 
 * @b: buffer buffer
 * @size: size size
 * Return: void void 
 */

void print_buffer(char *b, int size)
{
	int o, e, s;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		s = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (i = 0; i < 10; i++)
		{
			if (e < s)
				printf("%02x", *(b + o + i));
			else
				printf("  ");
			if (e % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; e < s; e++)
		{
			int c = *(b + o + e);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
