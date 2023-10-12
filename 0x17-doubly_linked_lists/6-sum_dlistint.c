#include "lists.h"

/**
 * sum_dlistint - function to return the sum of all the data
 * @head: pointer to the dlistint_t struct
 * Return: sum of the data
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int summation;

	summation = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			summation += head->n;
			head = head->next;
		}
	}

	return (summation);
}
