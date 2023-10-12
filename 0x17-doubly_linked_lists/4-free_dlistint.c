#include "lists.h"

/**
 * free_dlistint - function to free a dlistint_t list.
 * @head: pointer to dlistint_t
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
