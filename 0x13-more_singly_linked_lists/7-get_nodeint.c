#include "lists.h"
/**
 * get_nodeint_at_index - function to return a node at a particular index
 * @head: pointer to listint_t
 * @index: index of the node starting at 0
 * Return: Null if node does not exist
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *tmp = head;

	while (num < index && tmp < index)
	{
		tmp = tmp->next;
		num++;
	}
	return (tmp ? tmp : NULL);
}
