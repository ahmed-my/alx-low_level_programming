#include "lists.h"

/**
 * add_dnodeint - function to add a new node at the beginning
 * @head: pointer to pointer to dlistint_t
 * @n: value of the element
 * Return: the new element address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;
	dlistint_t *h;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new_element->next = h;

	if (h != NULL)
		h->prev = new_element;

	*head = new_element;

	return (new_element);
}
