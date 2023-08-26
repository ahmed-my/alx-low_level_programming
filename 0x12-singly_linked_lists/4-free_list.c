#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free linked list
 * @head: list_t to be free
 *
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head_>next;
		free(head_>str);
		free(head);
		head = tmp;
	}
}
