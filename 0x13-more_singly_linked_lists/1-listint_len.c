#include "lists.h"
/**
 * listint_len - function to return number of elements
 * @h: pointer to listint_t
 *
 * Return: number of elements in linked listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
