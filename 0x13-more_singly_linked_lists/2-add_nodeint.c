#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 * @head: Pointer to the pointer
 * @n: element to add
 *
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;
	
	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}
	
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
