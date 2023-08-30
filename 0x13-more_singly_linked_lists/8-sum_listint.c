#include "lists.h"
/**
 * sum_listint - function to return the sum of all data(n)
 * @head: pointer to the listint_t
 * Return: sum
 *
 */
int sum_listint(listint_t *head)
{
	int summation = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		summation = summation + tmp->n;
		tmp = tmp->next;
	}
	return (summation);
}

