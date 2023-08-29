#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head: pointer to pointer to listint_t
 * Return: returns the head node's data or 0 if empty
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!head || !*head)
	{
		return (0);
	}

	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (i);
}
