#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to the listint_t
 * Return: pointer to the first node of the reversed list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n = NULL; /* n denote next */
	listint_t *p = NULL; /* p denote previous */

	while (head)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
