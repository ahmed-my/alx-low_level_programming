#include "lists.h"
/**
 * print_dlistint - function to print all elements of dlistint_t list
 * @h: pointer to dlistint_t
 * Return: the number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int element_count;

	element_count = 0;

	if (h == NULL)
		return (element_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		element_count++;
		h = h->next;
	}

	return (element_count);
}
