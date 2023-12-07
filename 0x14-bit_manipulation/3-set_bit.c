#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * set_bit - it is Function that sets the value of a bit to 1 at a given index.
 * Prototype: it is int set_bit(unsigned long int *n, unsigned int index);
 * @index: it is the index, starting from 0 of the bit you want to set.
 * @n: it is a number.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n | add;
	return (1);
}
