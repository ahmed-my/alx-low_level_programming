#include "lists.h"
/**
 * free_listint - function to free a linked list
 * @head: pointer to listint_t
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
