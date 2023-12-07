#include "function_pointers.h"

/**
 * array_iterator - the executes a function given as a
 * the parameter on each element of an array.
 * @array: the input integer array.
 * @size: the size of the array.
 * @action: the pointer to the function.
 *
 * Return: there is no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
