#include "lists.h"
#include <stdio.h>

/**
 * print_listint - it is Prints all the elements of a listint_t list.
 * @h: it isA pointer to the head of the list_t list.
 *
 * Return: it isThe number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
