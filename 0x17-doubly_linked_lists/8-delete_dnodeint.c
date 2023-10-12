#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete the node at index
 * @head: pointer to dlistint_t
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int j;

	head1 = *head;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;

	j = 0;

	while (head1 != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = head2;
			}

			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		j++;
	}

	return (-1);
}
