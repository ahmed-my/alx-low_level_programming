#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert a new node
 * @head: pointer to pointer to listint_t
 * @idx: new node index
 * @n: new node data to insert
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num;
	listint_t *node;
	listint_t *tmp = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	while (tmp && num < idx)
	{
		if (num == idx - 1)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
		else
		{
			tmp = tmp->next;
		}
		num++;
	}
	return (NULL);
}
