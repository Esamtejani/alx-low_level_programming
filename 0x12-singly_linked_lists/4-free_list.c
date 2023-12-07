#include "lists.h"

/**
 *free_list -the  Frees a list
 *@head: A it is pointer to the list head
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
