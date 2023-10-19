#include "lists.h"

/**
 * list_len -to  finds the number of elements in a linked list
 *@h: it is pointer to the list
 *
 *Return: alwys the number of elements
*/

size_t list_len(const list_t *h)
	{
		size_t elements = 0;

		while (h)
		{
			elements++;
			h = h->next;
		}

		return (elements);
	}
