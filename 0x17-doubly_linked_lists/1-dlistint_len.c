#include "lists.h"

/**
 * dlistint_len - function to return number of elements
 * @h: pointer to dlistint_t
 * Return: the number of nodes
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int number_count;

	number_count = 0;

	if (h == NULL)
		return (number_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		number_count++;
		h = h->next;
	}

	return (number_count);
}
